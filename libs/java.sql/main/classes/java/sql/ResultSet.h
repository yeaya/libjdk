#ifndef _java_sql_ResultSet_h_
#define _java_sql_ResultSet_h_
//$ interface java.sql.ResultSet
//$ extends java.sql.Wrapper,java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>
#include <java/sql/Wrapper.h>

#pragma push_macro("CLOSE_CURSORS_AT_COMMIT")
#undef CLOSE_CURSORS_AT_COMMIT
#pragma push_macro("CONCUR_READ_ONLY")
#undef CONCUR_READ_ONLY
#pragma push_macro("CONCUR_UPDATABLE")
#undef CONCUR_UPDATABLE
#pragma push_macro("FETCH_FORWARD")
#undef FETCH_FORWARD
#pragma push_macro("FETCH_REVERSE")
#undef FETCH_REVERSE
#pragma push_macro("FETCH_UNKNOWN")
#undef FETCH_UNKNOWN
#pragma push_macro("HOLD_CURSORS_OVER_COMMIT")
#undef HOLD_CURSORS_OVER_COMMIT
#pragma push_macro("TYPE_FORWARD_ONLY")
#undef TYPE_FORWARD_ONLY
#pragma push_macro("TYPE_SCROLL_INSENSITIVE")
#undef TYPE_SCROLL_INSENSITIVE
#pragma push_macro("TYPE_SCROLL_SENSITIVE")
#undef TYPE_SCROLL_SENSITIVE

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
		class ResultSetMetaData;
		class RowId;
		class SQLType;
		class SQLWarning;
		class SQLXML;
		class Statement;
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

class $export ResultSet : public ::java::sql::Wrapper, public ::java::lang::AutoCloseable {
	$interface(ResultSet, $NO_CLASS_INIT, ::java::sql::Wrapper, ::java::lang::AutoCloseable)
public:
	virtual bool absolute(int32_t row) {return false;}
	virtual void afterLast() {}
	virtual void beforeFirst() {}
	virtual void cancelRowUpdates() {}
	virtual void clearWarnings() {}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual void deleteRow() {}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t findColumn($String* columnLabel) {return 0;}
	virtual bool first() {return false;}
	virtual ::java::sql::Array* getArray(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Array* getArray($String* columnLabel) {return nullptr;}
	virtual ::java::io::InputStream* getAsciiStream(int32_t columnIndex) {return nullptr;}
	virtual ::java::io::InputStream* getAsciiStream($String* columnLabel) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal(int32_t columnIndex, int32_t scale) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal($String* columnLabel, int32_t scale) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal(int32_t columnIndex) {return nullptr;}
	virtual ::java::math::BigDecimal* getBigDecimal($String* columnLabel) {return nullptr;}
	virtual ::java::io::InputStream* getBinaryStream(int32_t columnIndex) {return nullptr;}
	virtual ::java::io::InputStream* getBinaryStream($String* columnLabel) {return nullptr;}
	virtual ::java::sql::Blob* getBlob(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Blob* getBlob($String* columnLabel) {return nullptr;}
	virtual bool getBoolean(int32_t columnIndex) {return false;}
	virtual bool getBoolean($String* columnLabel) {return false;}
	virtual int8_t getByte(int32_t columnIndex) {return 0;}
	virtual int8_t getByte($String* columnLabel) {return 0;}
	virtual $bytes* getBytes(int32_t columnIndex) {return nullptr;}
	virtual $bytes* getBytes($String* columnLabel) {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream(int32_t columnIndex) {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream($String* columnLabel) {return nullptr;}
	virtual ::java::sql::Clob* getClob(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Clob* getClob($String* columnLabel) {return nullptr;}
	virtual int32_t getConcurrency() {return 0;}
	virtual $String* getCursorName() {return nullptr;}
	virtual ::java::sql::Date* getDate(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Date* getDate($String* columnLabel) {return nullptr;}
	virtual ::java::sql::Date* getDate(int32_t columnIndex, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Date* getDate($String* columnLabel, ::java::util::Calendar* cal) {return nullptr;}
	virtual double getDouble(int32_t columnIndex) {return 0.0;}
	virtual double getDouble($String* columnLabel) {return 0.0;}
	virtual int32_t getFetchDirection() {return 0;}
	virtual int32_t getFetchSize() {return 0;}
	virtual float getFloat(int32_t columnIndex) {return 0.0;}
	virtual float getFloat($String* columnLabel) {return 0.0;}
	virtual int32_t getHoldability() {return 0;}
	virtual int32_t getInt(int32_t columnIndex) {return 0;}
	virtual int32_t getInt($String* columnLabel) {return 0;}
	virtual int64_t getLong(int32_t columnIndex) {return 0;}
	virtual int64_t getLong($String* columnLabel) {return 0;}
	virtual ::java::sql::ResultSetMetaData* getMetaData() {return nullptr;}
	virtual ::java::io::Reader* getNCharacterStream(int32_t columnIndex) {return nullptr;}
	virtual ::java::io::Reader* getNCharacterStream($String* columnLabel) {return nullptr;}
	virtual ::java::sql::NClob* getNClob(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::NClob* getNClob($String* columnLabel) {return nullptr;}
	virtual $String* getNString(int32_t columnIndex) {return nullptr;}
	virtual $String* getNString($String* columnLabel) {return nullptr;}
	virtual $Object* getObject(int32_t columnIndex) {return nullptr;}
	virtual $Object* getObject($String* columnLabel) {return nullptr;}
	virtual $Object* getObject(int32_t columnIndex, ::java::util::Map* map) {return nullptr;}
	virtual $Object* getObject($String* columnLabel, ::java::util::Map* map) {return nullptr;}
	virtual $Object* getObject(int32_t columnIndex, $Class* type) {return nullptr;}
	virtual $Object* getObject($String* columnLabel, $Class* type) {return nullptr;}
	virtual ::java::sql::Ref* getRef(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Ref* getRef($String* columnLabel) {return nullptr;}
	virtual int32_t getRow() {return 0;}
	virtual ::java::sql::RowId* getRowId(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::RowId* getRowId($String* columnLabel) {return nullptr;}
	virtual ::java::sql::SQLXML* getSQLXML(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::SQLXML* getSQLXML($String* columnLabel) {return nullptr;}
	virtual int16_t getShort(int32_t columnIndex) {return 0;}
	virtual int16_t getShort($String* columnLabel) {return 0;}
	virtual ::java::sql::Statement* getStatement() {return nullptr;}
	virtual $String* getString(int32_t columnIndex) {return nullptr;}
	virtual $String* getString($String* columnLabel) {return nullptr;}
	virtual ::java::sql::Time* getTime(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Time* getTime($String* columnLabel) {return nullptr;}
	virtual ::java::sql::Time* getTime(int32_t columnIndex, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Time* getTime($String* columnLabel, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp(int32_t columnIndex) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp($String* columnLabel) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp(int32_t columnIndex, ::java::util::Calendar* cal) {return nullptr;}
	virtual ::java::sql::Timestamp* getTimestamp($String* columnLabel, ::java::util::Calendar* cal) {return nullptr;}
	virtual int32_t getType() {return 0;}
	virtual ::java::net::URL* getURL(int32_t columnIndex) {return nullptr;}
	virtual ::java::net::URL* getURL($String* columnLabel) {return nullptr;}
	virtual ::java::io::InputStream* getUnicodeStream(int32_t columnIndex) {return nullptr;}
	virtual ::java::io::InputStream* getUnicodeStream($String* columnLabel) {return nullptr;}
	virtual ::java::sql::SQLWarning* getWarnings() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual void insertRow() {}
	virtual bool isAfterLast() {return false;}
	virtual bool isBeforeFirst() {return false;}
	virtual bool isClosed() {return false;}
	virtual bool isFirst() {return false;}
	virtual bool isLast() {return false;}
	virtual bool last() {return false;}
	virtual void moveToCurrentRow() {}
	virtual void moveToInsertRow() {}
	virtual bool next() {return false;}
	virtual bool previous() {return false;}
	virtual void refreshRow() {}
	virtual bool relative(int32_t rows) {return false;}
	virtual bool rowDeleted() {return false;}
	virtual bool rowInserted() {return false;}
	virtual bool rowUpdated() {return false;}
	virtual void setFetchDirection(int32_t direction) {}
	virtual void setFetchSize(int32_t rows) {}
	virtual $String* toString() override;
	virtual void updateArray(int32_t columnIndex, ::java::sql::Array* x) {}
	virtual void updateArray($String* columnLabel, ::java::sql::Array* x) {}
	virtual void updateAsciiStream(int32_t columnIndex, ::java::io::InputStream* x, int32_t length) {}
	virtual void updateAsciiStream($String* columnLabel, ::java::io::InputStream* x, int32_t length) {}
	virtual void updateAsciiStream(int32_t columnIndex, ::java::io::InputStream* x, int64_t length) {}
	virtual void updateAsciiStream($String* columnLabel, ::java::io::InputStream* x, int64_t length) {}
	virtual void updateAsciiStream(int32_t columnIndex, ::java::io::InputStream* x) {}
	virtual void updateAsciiStream($String* columnLabel, ::java::io::InputStream* x) {}
	virtual void updateBigDecimal(int32_t columnIndex, ::java::math::BigDecimal* x) {}
	virtual void updateBigDecimal($String* columnLabel, ::java::math::BigDecimal* x) {}
	virtual void updateBinaryStream(int32_t columnIndex, ::java::io::InputStream* x, int32_t length) {}
	virtual void updateBinaryStream($String* columnLabel, ::java::io::InputStream* x, int32_t length) {}
	virtual void updateBinaryStream(int32_t columnIndex, ::java::io::InputStream* x, int64_t length) {}
	virtual void updateBinaryStream($String* columnLabel, ::java::io::InputStream* x, int64_t length) {}
	virtual void updateBinaryStream(int32_t columnIndex, ::java::io::InputStream* x) {}
	virtual void updateBinaryStream($String* columnLabel, ::java::io::InputStream* x) {}
	virtual void updateBlob(int32_t columnIndex, ::java::sql::Blob* x) {}
	virtual void updateBlob($String* columnLabel, ::java::sql::Blob* x) {}
	virtual void updateBlob(int32_t columnIndex, ::java::io::InputStream* inputStream, int64_t length) {}
	virtual void updateBlob($String* columnLabel, ::java::io::InputStream* inputStream, int64_t length) {}
	virtual void updateBlob(int32_t columnIndex, ::java::io::InputStream* inputStream) {}
	virtual void updateBlob($String* columnLabel, ::java::io::InputStream* inputStream) {}
	virtual void updateBoolean(int32_t columnIndex, bool x) {}
	virtual void updateBoolean($String* columnLabel, bool x) {}
	virtual void updateByte(int32_t columnIndex, int8_t x) {}
	virtual void updateByte($String* columnLabel, int8_t x) {}
	virtual void updateBytes(int32_t columnIndex, $bytes* x) {}
	virtual void updateBytes($String* columnLabel, $bytes* x) {}
	virtual void updateCharacterStream(int32_t columnIndex, ::java::io::Reader* x, int32_t length) {}
	virtual void updateCharacterStream($String* columnLabel, ::java::io::Reader* reader, int32_t length) {}
	virtual void updateCharacterStream(int32_t columnIndex, ::java::io::Reader* x, int64_t length) {}
	virtual void updateCharacterStream($String* columnLabel, ::java::io::Reader* reader, int64_t length) {}
	virtual void updateCharacterStream(int32_t columnIndex, ::java::io::Reader* x) {}
	virtual void updateCharacterStream($String* columnLabel, ::java::io::Reader* reader) {}
	virtual void updateClob(int32_t columnIndex, ::java::sql::Clob* x) {}
	virtual void updateClob($String* columnLabel, ::java::sql::Clob* x) {}
	virtual void updateClob(int32_t columnIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void updateClob($String* columnLabel, ::java::io::Reader* reader, int64_t length) {}
	virtual void updateClob(int32_t columnIndex, ::java::io::Reader* reader) {}
	virtual void updateClob($String* columnLabel, ::java::io::Reader* reader) {}
	virtual void updateDate(int32_t columnIndex, ::java::sql::Date* x) {}
	virtual void updateDate($String* columnLabel, ::java::sql::Date* x) {}
	virtual void updateDouble(int32_t columnIndex, double x) {}
	virtual void updateDouble($String* columnLabel, double x) {}
	virtual void updateFloat(int32_t columnIndex, float x) {}
	virtual void updateFloat($String* columnLabel, float x) {}
	virtual void updateInt(int32_t columnIndex, int32_t x) {}
	virtual void updateInt($String* columnLabel, int32_t x) {}
	virtual void updateLong(int32_t columnIndex, int64_t x) {}
	virtual void updateLong($String* columnLabel, int64_t x) {}
	virtual void updateNCharacterStream(int32_t columnIndex, ::java::io::Reader* x, int64_t length) {}
	virtual void updateNCharacterStream($String* columnLabel, ::java::io::Reader* reader, int64_t length) {}
	virtual void updateNCharacterStream(int32_t columnIndex, ::java::io::Reader* x) {}
	virtual void updateNCharacterStream($String* columnLabel, ::java::io::Reader* reader) {}
	virtual void updateNClob(int32_t columnIndex, ::java::sql::NClob* nClob) {}
	virtual void updateNClob($String* columnLabel, ::java::sql::NClob* nClob) {}
	virtual void updateNClob(int32_t columnIndex, ::java::io::Reader* reader, int64_t length) {}
	virtual void updateNClob($String* columnLabel, ::java::io::Reader* reader, int64_t length) {}
	virtual void updateNClob(int32_t columnIndex, ::java::io::Reader* reader) {}
	virtual void updateNClob($String* columnLabel, ::java::io::Reader* reader) {}
	virtual void updateNString(int32_t columnIndex, $String* nString) {}
	virtual void updateNString($String* columnLabel, $String* nString) {}
	virtual void updateNull(int32_t columnIndex) {}
	virtual void updateNull($String* columnLabel) {}
	virtual void updateObject(int32_t columnIndex, Object$* x, int32_t scaleOrLength) {}
	virtual void updateObject(int32_t columnIndex, Object$* x) {}
	virtual void updateObject($String* columnLabel, Object$* x, int32_t scaleOrLength) {}
	virtual void updateObject($String* columnLabel, Object$* x) {}
	virtual void updateObject(int32_t columnIndex, Object$* x, ::java::sql::SQLType* targetSqlType, int32_t scaleOrLength);
	virtual void updateObject($String* columnLabel, Object$* x, ::java::sql::SQLType* targetSqlType, int32_t scaleOrLength);
	virtual void updateObject(int32_t columnIndex, Object$* x, ::java::sql::SQLType* targetSqlType);
	virtual void updateObject($String* columnLabel, Object$* x, ::java::sql::SQLType* targetSqlType);
	virtual void updateRef(int32_t columnIndex, ::java::sql::Ref* x) {}
	virtual void updateRef($String* columnLabel, ::java::sql::Ref* x) {}
	virtual void updateRow() {}
	virtual void updateRowId(int32_t columnIndex, ::java::sql::RowId* x) {}
	virtual void updateRowId($String* columnLabel, ::java::sql::RowId* x) {}
	virtual void updateSQLXML(int32_t columnIndex, ::java::sql::SQLXML* xmlObject) {}
	virtual void updateSQLXML($String* columnLabel, ::java::sql::SQLXML* xmlObject) {}
	virtual void updateShort(int32_t columnIndex, int16_t x) {}
	virtual void updateShort($String* columnLabel, int16_t x) {}
	virtual void updateString(int32_t columnIndex, $String* x) {}
	virtual void updateString($String* columnLabel, $String* x) {}
	virtual void updateTime(int32_t columnIndex, ::java::sql::Time* x) {}
	virtual void updateTime($String* columnLabel, ::java::sql::Time* x) {}
	virtual void updateTimestamp(int32_t columnIndex, ::java::sql::Timestamp* x) {}
	virtual void updateTimestamp($String* columnLabel, ::java::sql::Timestamp* x) {}
	virtual bool wasNull() {return false;}
	static const int32_t FETCH_FORWARD = 1000;
	static const int32_t FETCH_REVERSE = 1001;
	static const int32_t FETCH_UNKNOWN = 1002;
	static const int32_t TYPE_FORWARD_ONLY = 1003;
	static const int32_t TYPE_SCROLL_INSENSITIVE = 1004;
	static const int32_t TYPE_SCROLL_SENSITIVE = 1005;
	static const int32_t CONCUR_READ_ONLY = 1007;
	static const int32_t CONCUR_UPDATABLE = 1008;
	static const int32_t HOLD_CURSORS_OVER_COMMIT = 1;
	static const int32_t CLOSE_CURSORS_AT_COMMIT = 2;
};

	} // sql
} // java

#pragma pop_macro("CLOSE_CURSORS_AT_COMMIT")
#pragma pop_macro("CONCUR_READ_ONLY")
#pragma pop_macro("CONCUR_UPDATABLE")
#pragma pop_macro("FETCH_FORWARD")
#pragma pop_macro("FETCH_REVERSE")
#pragma pop_macro("FETCH_UNKNOWN")
#pragma pop_macro("HOLD_CURSORS_OVER_COMMIT")
#pragma pop_macro("TYPE_FORWARD_ONLY")
#pragma pop_macro("TYPE_SCROLL_INSENSITIVE")
#pragma pop_macro("TYPE_SCROLL_SENSITIVE")

#endif // _java_sql_ResultSet_h_