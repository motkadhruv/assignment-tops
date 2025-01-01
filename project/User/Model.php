<?php
class model
{
    public $conn;
    function __construct()
    {
        $this->conn=new mysqli("localhost","root","","jewellery"); 
    } 
    function insert($tbl,$data)
    {
        $col_arr=array_keys($data);
        $col=implode(",",$col_arr);
        $val_arr=array_values($data);
        $val=implode("','",$val_arr);
        $sql="insert into $tbl ($col) values ('$val')";
        $run=$this->conn->query($sql);
        return $run;
    }
    function select_where($table,$where)
    {
        $col_arr=array_keys($where);
        $val_arr=array_values($where);
        $select="select * from $table where 1=1 ";
        $i=0;
        foreach($where as $w)
        {
            $select.= " and $col_arr[$i]= '$val_arr[$i]' ";
            $i++;
        }
        $run=$this->conn->query($select);
        return $run;
    }
    function select($tbl)
    {
        $sql="select * from $tbl";
        $run=$this->conn->query($sql);
        while($fetch=$run->fetch_object())
        {
            $arr[]=$fetch;
        }
        return $arr;
    }
    function select_where_multidata($tbl,$where)
    {
        $sel="select * from $tbl where 1=1";
        $col_arr=array_keys($where);
        $val_arr=array_values($where);
        $i=0;
        foreach($where as $c)
        {
            $sel.= " and $col_arr[$i] = '$val_arr[$i]' ";
            $i++;
        }
        $run=$this->conn->query($sel);
        while($fetch=$run->fetch_object())
        {
            $arr[]=$fetch;
        }
        if(!empty($arr))
        {
            return $arr;
        }
    }
    function update($tbl,$data,$where)
    {
        $col_arr = array_keys($data);
        $val_arr = array_values($data);
        $update = "update $tbl set ";
        $j=0;
        $count=count($data);
        foreach($data as $d)
        {
            if($count == $j+1)
            {
                $update .="$col_arr[$j] = '$val_arr[$j]' ";
            }
            else
            {
                $update .="$col_arr[$j] = '$val_arr[$j]' ";
                $j++;
            }
        }
        $update.= " where 1=1 ";
        $wcol_arr = array_keys($where);
        $wval_arr = array_values($where);
        $i=0;
        foreach($where as $d)
        {
            $update .=" and $wcol_arr[$i] = '$wval_arr[$i]' ";
        }
        $run = $this->conn->query($update);
        return $run;
    }
    function select_join_where_multidata($tbl1,$tbl2,$on,$where)
    {
        $sel="select * from $tbl1 join $tbl2 on $on where 1=1 ";
        $col_arr=array_keys($where);
        $val_arr=array_values($where);
        $i=0;
        foreach($where as $c)
        {
            $sel.=" and $col_arr[$i]='$val_arr[$i]'";
            $i++;
        }
        $run=$this->conn->query($sel);
        while($fetch=$run->fetch_object())
        {
            $arr[]=$fetch;
        }
        if(!empty($arr))
        {
            return $arr;
        }
    }
}
?> 