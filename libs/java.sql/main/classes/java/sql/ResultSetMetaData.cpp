#include <java/sql/ResultSetMetaData.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _ResultSetMetaData_FieldInfo_[] = {
	{"columnNoNulls", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSetMetaData, columnNoNulls)},
	{"columnNullable", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSetMetaData, columnNullable)},
	{"columnNullableUnknown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSetMetaData, columnNullableUnknown)},
	{}
};

$MethodInfo _ResultSetMetaData_MethodInfo_[] = {
	{"getCatalogName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnClassName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnDisplaySize", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnLabel", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnType", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getColumnTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getPrecision", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getScale", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSchemaName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTableName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isAutoIncrement", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isCaseSensitive", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isCurrency", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isDefinitelyWritable", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isNullable", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isReadOnly", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isSearchable", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isSigned", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isWritable", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _ResultSetMetaData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ResultSetMetaData",
	nullptr,
	"java.sql.Wrapper",
	_ResultSetMetaData_FieldInfo_,
	_ResultSetMetaData_MethodInfo_
};

$Object* allocate$ResultSetMetaData($Class* clazz) {
	return $of($alloc(ResultSetMetaData));
}

$Class* ResultSetMetaData::load$($String* name, bool initialize) {
	$loadClass(ResultSetMetaData, name, initialize, &_ResultSetMetaData_ClassInfo_, allocate$ResultSetMetaData);
	return class$;
}

$Class* ResultSetMetaData::class$ = nullptr;

	} // sql
} // java