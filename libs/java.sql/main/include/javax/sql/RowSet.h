#ifndef _javax_sql_RowSet_h_
#define _javax_sql_RowSet_h_
//$ interface javax.sql.RowSet
//$ extends java.sql.ResultSet

#include <java/lang/Array.h>
#include <java/sql/ResultSet.h>

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
		class Ref;
		class RowId;
		class SQLXML;
		class Time;
		class Timestamp;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Map;
	}
}
namespace javax {
	namespace sql {
		class RowSetListener;
	}
}

namespace javax {
	namespace sql {

class $import RowSet : public ::java::sql::ResultSet {
	$interface(RowSet, $NO_CLASS_INIT, ::java::sql::ResultSet)
public:
	virtual void addRowSetListener(::javax::sql::RowSetListener* listener) {}
	virtual void clearParameters() {}
	virtual void execute() {}
	virtual $String* getCommand() {return nullptr;}
	virtual $String* getDataSourceName() {return nullptr;}
	virtual bool getEscapeProcessing() {return false;}
	virtual int32_t getMaxFieldSize() {return 0;}
	virtual int32_t getMaxRows() {return 0;}
	virtual $String* getPassword() {return nullptr;}
	virtual int32_t getQueryTimeout() {return 0;}
	virtual int32_t getTransactionIsolation() {return 0;}
	virtual ::java::util::Map* getTypeMap() {return nullptr;}
	virtual $String* getUrl() {return nullptr;}
	virtual $String* getUsername() {return nullptr;}
	virtual bool isReadOnly() {return false;}
	virtual void removeRowSetListener(::javax::sql::RowSetListener* listener) {}
	virtual void setArray(int32_t i, ::java::sql::Array* x) {}
	virtual void setAsciiStream(int32_t parameterIndex, ::java::io::InputStream* x, int32_t length) {}
	virtual void setAsciiStream($String* parameterName, ::java::io::InputStream* x, int32_t length) {}
	virtual void setAsciiStream(int32_t parameterIndex, ::java::io::InputStream* x) {}
	virtual void setAsciiStream($String* parameterName, ::java::io::InputStream* x) {}
	virtual void setBigDecimal(int32_t parameterIndex, ::java::math::BigDecimal* x) {}
	virtual void setBigDecimal($String* parameterName, ::java::math::BigDecimal* x) {}
	virtual void setBinaryStream(int32_t parameterIndex, ::java::io::InputStream* x, int32_t length) {}
	virtual void setBinaryStream($String* parameterName, ::java::io::InputStream* x, int32_t length) {}
	virtual void setBinaryStream(int32_t parameterIndex, ::java::io::InputStream* x) {}
	virtual void setBinaryStream($String* parameterName, ::java::io::InputStream* x) {}
	virtual void setBlob(int32_t i, ::java::sql::Blob* x) {}
	virtual void setBlob(int32_t parameterIndex, ::java::io::InputStream* inputStream, int64_t length) {}
	virtual void setBlob(int32_t parameterIndex, ::java::io::InputStream* inputStream) {}
	virtual void setBlob($String* parameterName, ::java::io::InputStream* inputStream, int64_t length) {}
	virtual void setBlob($String* parameterName, ::java::sql::Blob* x) {}
	virtual void setBlob($String* parameterName, ::java::io::InputStream* inputStream) {}
	virtual void setBoolean(int32_t parameterIndex, bool x) {}
	virtual void setBoolean($String* parameterName, bool x) {}
	virtual void setByte(int32_t parameterIndex, int8_t x) {}
	virtual void setByte($String* parameterName, int8_t x) {}
	virtual void setBytes(int32_t parameterIndex, $bytes* x) {}
	virtual void setBytes($String* parameterName, $bytes* x) {}
	virtual void setCharacterStream(int32_t parameterIndex, ::java::io::Reader* reader, int32_t length) {}
	virtual void setCharacterStream($String* parameterName, ::java::io::Reader* reader, int32_t length) {}
	virtual void setCharacterStream(int32_t parameterIndex, ::java::io::Reader* reader) {}
	virtual void setCharacterStream($String* parameterName, ::java::io::Reader* reader) {}
	virtual void setClob(int32_t i, ::java::sql::Clob* x) {}
	virtual void setClob(int32_t parameterIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void setClob(int32_t parameterIndex, ::java::io::Reader* reader) {}
	virtual void setClob($String* parameterName, ::java::io::Reader* reader, int64_t length) {}
	virtual void setClob($String* parameterName, ::java::sql::Clob* x) {}
	virtual void setClob($String* parameterName, ::java::io::Reader* reader) {}
	virtual void setCommand($String* cmd) {}
	virtual void setConcurrency(int32_t concurrency) {}
	virtual void setDataSourceName($String* name) {}
	virtual void setDate(int32_t parameterIndex, ::java::sql::Date* x) {}
	virtual void setDate(int32_t parameterIndex, ::java::sql::Date* x, ::java::util::Calendar* cal) {}
	virtual void setDate($String* parameterName, ::java::sql::Date* x) {}
	virtual void setDate($String* parameterName, ::java::sql::Date* x, ::java::util::Calendar* cal) {}
	virtual void setDouble(int32_t parameterIndex, double x) {}
	virtual void setDouble($String* parameterName, double x) {}
	virtual void setEscapeProcessing(bool enable) {}
	virtual void setFloat(int32_t parameterIndex, float x) {}
	virtual void setFloat($String* parameterName, float x) {}
	virtual void setInt(int32_t parameterIndex, int32_t x) {}
	virtual void setInt($String* parameterName, int32_t x) {}
	virtual void setLong(int32_t parameterIndex, int64_t x) {}
	virtual void setLong($String* parameterName, int64_t x) {}
	virtual void setMaxFieldSize(int32_t max) {}
	virtual void setMaxRows(int32_t max) {}
	virtual void setNCharacterStream(int32_t parameterIndex, ::java::io::Reader* value) {}
	virtual void setNCharacterStream(int32_t parameterIndex, ::java::io::Reader* value, int64_t length) {}
	virtual void setNCharacterStream($String* parameterName, ::java::io::Reader* value, int64_t length) {}
	virtual void setNCharacterStream($String* parameterName, ::java::io::Reader* value) {}
	virtual void setNClob($String* parameterName, ::java::sql::NClob* value) {}
	virtual void setNClob($String* parameterName, ::java::io::Reader* reader, int64_t length) {}
	virtual void setNClob($String* parameterName, ::java::io::Reader* reader) {}
	virtual void setNClob(int32_t parameterIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void setNClob(int32_t parameterIndex, ::java::sql::NClob* value) {}
	virtual void setNClob(int32_t parameterIndex, ::java::io::Reader* reader) {}
	virtual void setNString(int32_t parameterIndex, $String* value) {}
	virtual void setNString($String* parameterName, $String* value) {}
	virtual void setNull(int32_t parameterIndex, int32_t sqlType) {}
	virtual void setNull($String* parameterName, int32_t sqlType) {}
	virtual void setNull(int32_t paramIndex, int32_t sqlType, $String* typeName) {}
	virtual void setNull($String* parameterName, int32_t sqlType, $String* typeName) {}
	virtual void setObject(int32_t parameterIndex, Object$* x, int32_t targetSqlType, int32_t scaleOrLength) {}
	virtual void setObject($String* parameterName, Object$* x, int32_t targetSqlType, int32_t scale) {}
	virtual void setObject(int32_t parameterIndex, Object$* x, int32_t targetSqlType) {}
	virtual void setObject($String* parameterName, Object$* x, int32_t targetSqlType) {}
	virtual void setObject($String* parameterName, Object$* x) {}
	virtual void setObject(int32_t parameterIndex, Object$* x) {}
	virtual void setPassword($String* password) {}
	virtual void setQueryTimeout(int32_t seconds) {}
	virtual void setReadOnly(bool value) {}
	virtual void setRef(int32_t i, ::java::sql::Ref* x) {}
	virtual void setRowId(int32_t parameterIndex, ::java::sql::RowId* x) {}
	virtual void setRowId($String* parameterName, ::java::sql::RowId* x) {}
	virtual void setSQLXML(int32_t parameterIndex, ::java::sql::SQLXML* xmlObject) {}
	virtual void setSQLXML($String* parameterName, ::java::sql::SQLXML* xmlObject) {}
	virtual void setShort(int32_t parameterIndex, int16_t x) {}
	virtual void setShort($String* parameterName, int16_t x) {}
	virtual void setString(int32_t parameterIndex, $String* x) {}
	virtual void setString($String* parameterName, $String* x) {}
	virtual void setTime(int32_t parameterIndex, ::java::sql::Time* x) {}
	virtual void setTime(int32_t parameterIndex, ::java::sql::Time* x, ::java::util::Calendar* cal) {}
	virtual void setTime($String* parameterName, ::java::sql::Time* x) {}
	virtual void setTime($String* parameterName, ::java::sql::Time* x, ::java::util::Calendar* cal) {}
	virtual void setTimestamp(int32_t parameterIndex, ::java::sql::Timestamp* x) {}
	virtual void setTimestamp($String* parameterName, ::java::sql::Timestamp* x) {}
	virtual void setTimestamp(int32_t parameterIndex, ::java::sql::Timestamp* x, ::java::util::Calendar* cal) {}
	virtual void setTimestamp($String* parameterName, ::java::sql::Timestamp* x, ::java::util::Calendar* cal) {}
	virtual void setTransactionIsolation(int32_t level) {}
	virtual void setType(int32_t type) {}
	virtual void setTypeMap(::java::util::Map* map) {}
	virtual void setURL(int32_t parameterIndex, ::java::net::URL* x) {}
	virtual void setUrl($String* url) {}
	virtual void setUsername($String* name) {}
};

	} // sql
} // javax

#endif // _javax_sql_RowSet_h_