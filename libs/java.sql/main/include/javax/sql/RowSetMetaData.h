#ifndef _javax_sql_RowSetMetaData_h_
#define _javax_sql_RowSetMetaData_h_
//$ interface javax.sql.RowSetMetaData
//$ extends java.sql.ResultSetMetaData

#include <java/sql/ResultSetMetaData.h>

namespace javax {
	namespace sql {

class $import RowSetMetaData : public ::java::sql::ResultSetMetaData {
	$interface(RowSetMetaData, $NO_CLASS_INIT, ::java::sql::ResultSetMetaData)
public:
	virtual void setAutoIncrement(int32_t columnIndex, bool property) {}
	virtual void setCaseSensitive(int32_t columnIndex, bool property) {}
	virtual void setCatalogName(int32_t columnIndex, $String* catalogName) {}
	virtual void setColumnCount(int32_t columnCount) {}
	virtual void setColumnDisplaySize(int32_t columnIndex, int32_t size) {}
	virtual void setColumnLabel(int32_t columnIndex, $String* label) {}
	virtual void setColumnName(int32_t columnIndex, $String* columnName) {}
	virtual void setColumnType(int32_t columnIndex, int32_t SQLType) {}
	virtual void setColumnTypeName(int32_t columnIndex, $String* typeName) {}
	virtual void setCurrency(int32_t columnIndex, bool property) {}
	virtual void setNullable(int32_t columnIndex, int32_t property) {}
	virtual void setPrecision(int32_t columnIndex, int32_t precision) {}
	virtual void setScale(int32_t columnIndex, int32_t scale) {}
	virtual void setSchemaName(int32_t columnIndex, $String* schemaName) {}
	virtual void setSearchable(int32_t columnIndex, bool property) {}
	virtual void setSigned(int32_t columnIndex, bool property) {}
	virtual void setTableName(int32_t columnIndex, $String* tableName) {}
};

	} // sql
} // javax

#endif // _javax_sql_RowSetMetaData_h_