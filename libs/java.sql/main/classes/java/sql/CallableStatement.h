#ifndef _java_sql_CallableStatement_h_
#define _java_sql_CallableStatement_h_
//$ interface java.sql.CallableStatement
//$ extends java.sql.PreparedStatement

#include <java/lang/Array.h>
#include <java/sql/PreparedStatement.h>

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
		class SQLType;
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

namespace java {
	namespace sql {

class $export CallableStatement : public ::java::sql::PreparedStatement {
	$interface(CallableStatement, $NO_CLASS_INIT, ::java::sql::PreparedStatement)
public:
	using ::java::sql::PreparedStatement::executeQuery;
	using ::java::sql::PreparedStatement::executeUpdate;
	using ::java::sql::PreparedStatement::execute;
	using ::java::sql::PreparedStatement::addBatch;
	using ::java::sql::PreparedStatement::executeLargeUpdate;
	virtual ::java::sql::Array* getArray(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Array* getArray($String* parameterName) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal(int32_t parameterIndex, int32_t scale) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal(int32_t parameterIndex) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal($String* parameterName) {return nullptr;}
	virtual ::java::sql::Blob* getBlob(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Blob* getBlob($String* parameterName) {return nullptr;}
	virtual bool getBoolean(int32_t parameterIndex) {return false;}
	virtual bool getBoolean($String* parameterName) {return false;}
	virtual int8_t getByte(int32_t parameterIndex) {return 0;}
	virtual int8_t getByte($String* parameterName) {return 0;}
	virtual $bytes* getBytes(int32_t parameterIndex) {return nullptr;}
	virtual $bytes* getBytes($String* parameterName) {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream(int32_t parameterIndex) {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream($String* parameterName) {return nullptr;}
	virtual ::java::sql::Clob* getClob(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Clob* getClob($String* parameterName) {return nullptr;}
	virtual ::java::sql::Date* getDate(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Date* getDate(int32_t parameterIndex, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Date* getDate($String* parameterName) {return nullptr;}
	virtual ::java::sql::Date* getDate($String* parameterName, ::java::util::Calendar* cal) {return nullptr;}
	virtual double getDouble(int32_t parameterIndex) {return 0.0;}
	virtual double getDouble($String* parameterName) {return 0.0;}
	virtual float getFloat(int32_t parameterIndex) {return 0.0;}
	virtual float getFloat($String* parameterName) {return 0.0;}
	virtual int32_t getInt(int32_t parameterIndex) {return 0;}
	virtual int32_t getInt($String* parameterName) {return 0;}
	virtual int64_t getLong(int32_t parameterIndex) {return 0;}
	virtual int64_t getLong($String* parameterName) {return 0;}
	virtual ::java::io::Reader* getNCharacterStream(int32_t parameterIndex) {return nullptr;}
	virtual ::java::io::Reader* getNCharacterStream($String* parameterName) {return nullptr;}
	virtual ::java::sql::NClob* getNClob(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::NClob* getNClob($String* parameterName) {return nullptr;}
	virtual $String* getNString(int32_t parameterIndex) {return nullptr;}
	virtual $String* getNString($String* parameterName) {return nullptr;}
	virtual $Object* getObject(int32_t parameterIndex) {return nullptr;}
	virtual $Object* getObject(int32_t parameterIndex, ::java::util::Map* map) {return nullptr;}
	virtual $Object* getObject($String* parameterName) {return nullptr;}
	virtual $Object* getObject($String* parameterName, ::java::util::Map* map) {return nullptr;}
	virtual $Object* getObject(int32_t parameterIndex, $Class* type) {return nullptr;}
	virtual $Object* getObject($String* parameterName, $Class* type) {return nullptr;}
	virtual ::java::sql::Ref* getRef(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Ref* getRef($String* parameterName) {return nullptr;}
	virtual ::java::sql::RowId* getRowId(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::RowId* getRowId($String* parameterName) {return nullptr;}
	virtual ::java::sql::SQLXML* getSQLXML(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::SQLXML* getSQLXML($String* parameterName) {return nullptr;}
	virtual int16_t getShort(int32_t parameterIndex) {return 0;}
	virtual int16_t getShort($String* parameterName) {return 0;}
	virtual $String* getString(int32_t parameterIndex) {return nullptr;}
	virtual $String* getString($String* parameterName) {return nullptr;}
	virtual ::java::sql::Time* getTime(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Time* getTime(int32_t parameterIndex, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Time* getTime($String* parameterName) {return nullptr;}
	virtual ::java::sql::Time* getTime($String* parameterName, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp(int32_t parameterIndex) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp(int32_t parameterIndex, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp($String* parameterName) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp($String* parameterName, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::net::URL* getURL(int32_t parameterIndex) {return nullptr;}
	virtual ::java::net::URL* getURL($String* parameterName) {return nullptr;}
	virtual void registerOutParameter(int32_t parameterIndex, int32_t sqlType) {}
	virtual void registerOutParameter(int32_t parameterIndex, int32_t sqlType, int32_t scale) {}
	virtual void registerOutParameter(int32_t parameterIndex, int32_t sqlType, $String* typeName) {}
	virtual void registerOutParameter($String* parameterName, int32_t sqlType) {}
	virtual void registerOutParameter($String* parameterName, int32_t sqlType, int32_t scale) {}
	virtual void registerOutParameter($String* parameterName, int32_t sqlType, $String* typeName) {}
	virtual void registerOutParameter(int32_t parameterIndex, ::java::sql::SQLType* sqlType);
	virtual void registerOutParameter(int32_t parameterIndex, ::java::sql::SQLType* sqlType, int32_t scale);
	virtual void registerOutParameter(int32_t parameterIndex, ::java::sql::SQLType* sqlType, $String* typeName);
	virtual void registerOutParameter($String* parameterName, ::java::sql::SQLType* sqlType);
	virtual void registerOutParameter($String* parameterName, ::java::sql::SQLType* sqlType, int32_t scale);
	virtual void registerOutParameter($String* parameterName, ::java::sql::SQLType* sqlType, $String* typeName);
	using ::java::sql::PreparedStatement::setAsciiStream;
	virtual void setAsciiStream($String* parameterName, ::java::io::InputStream* x, int32_t length) {}
	virtual void setAsciiStream($String* parameterName, ::java::io::InputStream* x, int64_t length) {}
	virtual void setAsciiStream($String* parameterName, ::java::io::InputStream* x) {}
	using ::java::sql::PreparedStatement::setBigDecimal;
	virtual void setBigDecimal($String* parameterName, ::java::math::BigDecimal* x) {}
	using ::java::sql::PreparedStatement::setBinaryStream;
	virtual void setBinaryStream($String* parameterName, ::java::io::InputStream* x, int32_t length) {}
	virtual void setBinaryStream($String* parameterName, ::java::io::InputStream* x, int64_t length) {}
	virtual void setBinaryStream($String* parameterName, ::java::io::InputStream* x) {}
	using ::java::sql::PreparedStatement::setBlob;
	virtual void setBlob($String* parameterName, ::java::io::InputStream* inputStream, int64_t length) {}
	virtual void setBlob($String* parameterName, ::java::sql::Blob* x) {}
	virtual void setBlob($String* parameterName, ::java::io::InputStream* inputStream) {}
	using ::java::sql::PreparedStatement::setBoolean;
	virtual void setBoolean($String* parameterName, bool x) {}
	using ::java::sql::PreparedStatement::setByte;
	virtual void setByte($String* parameterName, int8_t x) {}
	using ::java::sql::PreparedStatement::setBytes;
	virtual void setBytes($String* parameterName, $bytes* x) {}
	using ::java::sql::PreparedStatement::setCharacterStream;
	virtual void setCharacterStream($String* parameterName, ::java::io::Reader* reader, int32_t length) {}
	virtual void setCharacterStream($String* parameterName, ::java::io::Reader* reader, int64_t length) {}
	virtual void setCharacterStream($String* parameterName, ::java::io::Reader* reader) {}
	using ::java::sql::PreparedStatement::setClob;
	virtual void setClob($String* parameterName, ::java::io::Reader* reader, int64_t length) {}
	virtual void setClob($String* parameterName, ::java::sql::Clob* x) {}
	virtual void setClob($String* parameterName, ::java::io::Reader* reader) {}
	using ::java::sql::PreparedStatement::setDate;
	virtual void setDate($String* parameterName, ::java::sql::Date* x) {}
	virtual void setDate($String* parameterName, ::java::sql::Date* x, ::java::util::Calendar* cal) {}
	using ::java::sql::PreparedStatement::setDouble;
	virtual void setDouble($String* parameterName, double x) {}
	using ::java::sql::PreparedStatement::setFloat;
	virtual void setFloat($String* parameterName, float x) {}
	using ::java::sql::PreparedStatement::setInt;
	virtual void setInt($String* parameterName, int32_t x) {}
	using ::java::sql::PreparedStatement::setLong;
	virtual void setLong($String* parameterName, int64_t x) {}
	using ::java::sql::PreparedStatement::setNCharacterStream;
	virtual void setNCharacterStream($String* parameterName, ::java::io::Reader* value, int64_t length) {}
	virtual void setNCharacterStream($String* parameterName, ::java::io::Reader* value) {}
	using ::java::sql::PreparedStatement::setNClob;
	virtual void setNClob($String* parameterName, ::java::sql::NClob* value) {}
	virtual void setNClob($String* parameterName, ::java::io::Reader* reader, int64_t length) {}
	virtual void setNClob($String* parameterName, ::java::io::Reader* reader) {}
	using ::java::sql::PreparedStatement::setNString;
	virtual void setNString($String* parameterName, $String* value) {}
	using ::java::sql::PreparedStatement::setNull;
	virtual void setNull($String* parameterName, int32_t sqlType) {}
	virtual void setNull($String* parameterName, int32_t sqlType, $String* typeName) {}
	using ::java::sql::PreparedStatement::setObject;
	virtual void setObject($String* parameterName, Object$* x, int32_t targetSqlType, int32_t scale) {}
	virtual void setObject($String* parameterName, Object$* x, int32_t targetSqlType) {}
	virtual void setObject($String* parameterName, Object$* x) {}
	virtual void setObject($String* parameterName, Object$* x, ::java::sql::SQLType* targetSqlType, int32_t scaleOrLength);
	virtual void setObject($String* parameterName, Object$* x, ::java::sql::SQLType* targetSqlType);
	using ::java::sql::PreparedStatement::setRowId;
	virtual void setRowId($String* parameterName, ::java::sql::RowId* x) {}
	using ::java::sql::PreparedStatement::setSQLXML;
	virtual void setSQLXML($String* parameterName, ::java::sql::SQLXML* xmlObject) {}
	using ::java::sql::PreparedStatement::setShort;
	virtual void setShort($String* parameterName, int16_t x) {}
	using ::java::sql::PreparedStatement::setString;
	virtual void setString($String* parameterName, $String* x) {}
	using ::java::sql::PreparedStatement::setTime;
	virtual void setTime($String* parameterName, ::java::sql::Time* x) {}
	virtual void setTime($String* parameterName, ::java::sql::Time* x, ::java::util::Calendar* cal) {}
	using ::java::sql::PreparedStatement::setTimestamp;
	virtual void setTimestamp($String* parameterName, ::java::sql::Timestamp* x) {}
	virtual void setTimestamp($String* parameterName, ::java::sql::Timestamp* x, ::java::util::Calendar* cal) {}
	using ::java::sql::PreparedStatement::setURL;
	virtual void setURL($String* parameterName, ::java::net::URL* val) {}
	virtual bool wasNull() {return false;}
};

	} // sql
} // java

#endif // _java_sql_CallableStatement_h_