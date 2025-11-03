#ifndef _java_sql_PreparedStatement_h_
#define _java_sql_PreparedStatement_h_
//$ interface java.sql.PreparedStatement
//$ extends java.sql.Statement

#include <java/lang/Array.h>
#include <java/sql/Statement.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace sql {
		class Array;
		class Blob;
		class Clob;
		class Date;
		class NClob;
		class ParameterMetaData;
		class Ref;
		class ResultSet;
		class ResultSetMetaData;
		class RowId;
		class SQLType;
		class SQLXML;
		class Time;
		class Timestamp;
	}
}
namespace java {
	namespace util {
		class Calendar;
	}
}

namespace java {
	namespace sql {

class $import PreparedStatement : public ::java::sql::Statement {
	$interface(PreparedStatement, $NO_CLASS_INIT, ::java::sql::Statement)
public:
	using ::java::sql::Statement::addBatch;
	virtual void addBatch() {}
	virtual void clearParameters() {}
	using ::java::sql::Statement::execute;
	virtual bool execute() {return false;}
	using ::java::sql::Statement::executeLargeUpdate;
	virtual int64_t executeLargeUpdate();
	using ::java::sql::Statement::executeQuery;
	virtual ::java::sql::ResultSet* executeQuery() {return nullptr;}
	using ::java::sql::Statement::executeUpdate;
	virtual int32_t executeUpdate() {return 0;}
	virtual ::java::sql::ResultSetMetaData* getMetaData() {return nullptr;}
	virtual ::java::sql::ParameterMetaData* getParameterMetaData() {return nullptr;}
	virtual void setArray(int32_t parameterIndex, ::java::sql::Array* x) {}
	virtual void setAsciiStream(int32_t parameterIndex, ::java::io::InputStream* x, int32_t length) {}
	virtual void setAsciiStream(int32_t parameterIndex, ::java::io::InputStream* x, int64_t length) {}
	virtual void setAsciiStream(int32_t parameterIndex, ::java::io::InputStream* x) {}
	virtual void setBigDecimal(int32_t parameterIndex, ::java::math::BigDecimal* x) {}
	virtual void setBinaryStream(int32_t parameterIndex, ::java::io::InputStream* x, int32_t length) {}
	virtual void setBinaryStream(int32_t parameterIndex, ::java::io::InputStream* x, int64_t length) {}
	virtual void setBinaryStream(int32_t parameterIndex, ::java::io::InputStream* x) {}
	virtual void setBlob(int32_t parameterIndex, ::java::sql::Blob* x) {}
	virtual void setBlob(int32_t parameterIndex, ::java::io::InputStream* inputStream, int64_t length) {}
	virtual void setBlob(int32_t parameterIndex, ::java::io::InputStream* inputStream) {}
	virtual void setBoolean(int32_t parameterIndex, bool x) {}
	virtual void setByte(int32_t parameterIndex, int8_t x) {}
	virtual void setBytes(int32_t parameterIndex, $bytes* x) {}
	virtual void setCharacterStream(int32_t parameterIndex, ::java::io::Reader* reader, int32_t length) {}
	virtual void setCharacterStream(int32_t parameterIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void setCharacterStream(int32_t parameterIndex, ::java::io::Reader* reader) {}
	virtual void setClob(int32_t parameterIndex, ::java::sql::Clob* x) {}
	virtual void setClob(int32_t parameterIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void setClob(int32_t parameterIndex, ::java::io::Reader* reader) {}
	virtual void setDate(int32_t parameterIndex, ::java::sql::Date* x) {}
	virtual void setDate(int32_t parameterIndex, ::java::sql::Date* x, ::java::util::Calendar* cal) {}
	virtual void setDouble(int32_t parameterIndex, double x) {}
	virtual void setFloat(int32_t parameterIndex, float x) {}
	virtual void setInt(int32_t parameterIndex, int32_t x) {}
	virtual void setLong(int32_t parameterIndex, int64_t x) {}
	virtual void setNCharacterStream(int32_t parameterIndex, ::java::io::Reader* value, int64_t length) {}
	virtual void setNCharacterStream(int32_t parameterIndex, ::java::io::Reader* value) {}
	virtual void setNClob(int32_t parameterIndex, ::java::sql::NClob* value) {}
	virtual void setNClob(int32_t parameterIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void setNClob(int32_t parameterIndex, ::java::io::Reader* reader) {}
	virtual void setNString(int32_t parameterIndex, $String* value) {}
	virtual void setNull(int32_t parameterIndex, int32_t sqlType) {}
	virtual void setNull(int32_t parameterIndex, int32_t sqlType, $String* typeName) {}
	virtual void setObject(int32_t parameterIndex, Object$* x, int32_t targetSqlType) {}
	virtual void setObject(int32_t parameterIndex, Object$* x) {}
	virtual void setObject(int32_t parameterIndex, Object$* x, int32_t targetSqlType, int32_t scaleOrLength) {}
	virtual void setObject(int32_t parameterIndex, Object$* x, ::java::sql::SQLType* targetSqlType, int32_t scaleOrLength);
	virtual void setObject(int32_t parameterIndex, Object$* x, ::java::sql::SQLType* targetSqlType);
	virtual void setRef(int32_t parameterIndex, ::java::sql::Ref* x) {}
	virtual void setRowId(int32_t parameterIndex, ::java::sql::RowId* x) {}
	virtual void setSQLXML(int32_t parameterIndex, ::java::sql::SQLXML* xmlObject) {}
	virtual void setShort(int32_t parameterIndex, int16_t x) {}
	virtual void setString(int32_t parameterIndex, $String* x) {}
	virtual void setTime(int32_t parameterIndex, ::java::sql::Time* x) {}
	virtual void setTime(int32_t parameterIndex, ::java::sql::Time* x, ::java::util::Calendar* cal) {}
	virtual void setTimestamp(int32_t parameterIndex, ::java::sql::Timestamp* x) {}
	virtual void setTimestamp(int32_t parameterIndex, ::java::sql::Timestamp* x, ::java::util::Calendar* cal) {}
	virtual void setURL(int32_t parameterIndex, ::java::net::URL* x) {}
	virtual void setUnicodeStream(int32_t parameterIndex, ::java::io::InputStream* x, int32_t length) {}
};

	} // sql
} // java

#endif // _java_sql_PreparedStatement_h_