#include <javax/sql/RowSetMetaData.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {

$MethodInfo _RowSetMetaData_MethodInfo_[] = {
	{"setAutoIncrement", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCaseSensitive", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCatalogName", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setColumnCount", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setColumnDisplaySize", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setColumnLabel", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setColumnName", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setColumnType", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setColumnTypeName", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCurrency", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNullable", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setPrecision", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setScale", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSchemaName", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSearchable", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSigned", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTableName", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _RowSetMetaData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSetMetaData",
	nullptr,
	"java.sql.ResultSetMetaData",
	nullptr,
	_RowSetMetaData_MethodInfo_
};

$Object* allocate$RowSetMetaData($Class* clazz) {
	return $of($alloc(RowSetMetaData));
}

$Class* RowSetMetaData::load$($String* name, bool initialize) {
	$loadClass(RowSetMetaData, name, initialize, &_RowSetMetaData_ClassInfo_, allocate$RowSetMetaData);
	return class$;
}

$Class* RowSetMetaData::class$ = nullptr;

	} // sql
} // javax