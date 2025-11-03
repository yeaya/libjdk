#ifndef _java_sql_ResultSetMetaData_h_
#define _java_sql_ResultSetMetaData_h_
//$ interface java.sql.ResultSetMetaData
//$ extends java.sql.Wrapper

#include <java/sql/Wrapper.h>

namespace java {
	namespace sql {

class $export ResultSetMetaData : public ::java::sql::Wrapper {
	$interface(ResultSetMetaData, $NO_CLASS_INIT, ::java::sql::Wrapper)
public:
	virtual $String* getCatalogName(int32_t column) {return nullptr;}
	virtual $String* getColumnClassName(int32_t column) {return nullptr;}
	virtual int32_t getColumnCount() {return 0;}
	virtual int32_t getColumnDisplaySize(int32_t column) {return 0;}
	virtual $String* getColumnLabel(int32_t column) {return nullptr;}
	virtual $String* getColumnName(int32_t column) {return nullptr;}
	virtual int32_t getColumnType(int32_t column) {return 0;}
	virtual $String* getColumnTypeName(int32_t column) {return nullptr;}
	virtual int32_t getPrecision(int32_t column) {return 0;}
	virtual int32_t getScale(int32_t column) {return 0;}
	virtual $String* getSchemaName(int32_t column) {return nullptr;}
	virtual $String* getTableName(int32_t column) {return nullptr;}
	virtual bool isAutoIncrement(int32_t column) {return false;}
	virtual bool isCaseSensitive(int32_t column) {return false;}
	virtual bool isCurrency(int32_t column) {return false;}
	virtual bool isDefinitelyWritable(int32_t column) {return false;}
	virtual int32_t isNullable(int32_t column) {return 0;}
	virtual bool isReadOnly(int32_t column) {return false;}
	virtual bool isSearchable(int32_t column) {return false;}
	virtual bool isSigned(int32_t column) {return false;}
	virtual bool isWritable(int32_t column) {return false;}
	static const int32_t columnNoNulls = 0;
	static const int32_t columnNullable = 1;
	static const int32_t columnNullableUnknown = 2;
};

	} // sql
} // java

#endif // _java_sql_ResultSetMetaData_h_