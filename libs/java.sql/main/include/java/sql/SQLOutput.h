#ifndef _java_sql_SQLOutput_h_
#define _java_sql_SQLOutput_h_
//$ interface java.sql.SQLOutput
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class SQLData;
		class SQLType;
		class SQLXML;
		class Struct;
		class Time;
		class Timestamp;
	}
}

namespace java {
	namespace sql {

class $import SQLOutput : public ::java::lang::Object {
	$interface(SQLOutput, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void writeArray(::java::sql::Array* x) {}
	virtual void writeAsciiStream(::java::io::InputStream* x) {}
	virtual void writeBigDecimal(::java::math::BigDecimal* x) {}
	virtual void writeBinaryStream(::java::io::InputStream* x) {}
	virtual void writeBlob(::java::sql::Blob* x) {}
	virtual void writeBoolean(bool x) {}
	virtual void writeByte(int8_t x) {}
	virtual void writeBytes($bytes* x) {}
	virtual void writeCharacterStream(::java::io::Reader* x) {}
	virtual void writeClob(::java::sql::Clob* x) {}
	virtual void writeDate(::java::sql::Date* x) {}
	virtual void writeDouble(double x) {}
	virtual void writeFloat(float x) {}
	virtual void writeInt(int32_t x) {}
	virtual void writeLong(int64_t x) {}
	virtual void writeNClob(::java::sql::NClob* x) {}
	virtual void writeNString($String* x) {}
	virtual void writeObject(::java::sql::SQLData* x) {}
	virtual void writeObject(Object$* x, ::java::sql::SQLType* targetSqlType);
	virtual void writeRef(::java::sql::Ref* x) {}
	virtual void writeRowId(::java::sql::RowId* x) {}
	virtual void writeSQLXML(::java::sql::SQLXML* x) {}
	virtual void writeShort(int16_t x) {}
	virtual void writeString($String* x) {}
	virtual void writeStruct(::java::sql::Struct* x) {}
	virtual void writeTime(::java::sql::Time* x) {}
	virtual void writeTimestamp(::java::sql::Timestamp* x) {}
	virtual void writeURL(::java::net::URL* x) {}
};

	} // sql
} // java

#endif // _java_sql_SQLOutput_h_