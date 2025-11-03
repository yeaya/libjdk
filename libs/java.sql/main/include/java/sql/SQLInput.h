#ifndef _java_sql_SQLInput_h_
#define _java_sql_SQLInput_h_
//$ interface java.sql.SQLInput
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
		class SQLXML;
		class Time;
		class Timestamp;
	}
}

namespace java {
	namespace sql {

class $import SQLInput : public ::java::lang::Object {
	$interface(SQLInput, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::sql::Array* readArray() {return nullptr;}
	virtual ::java::io::InputStream* readAsciiStream() {return nullptr;}
	virtual ::java::math::BigDecimal* readBigDecimal() {return nullptr;}
	virtual ::java::io::InputStream* readBinaryStream() {return nullptr;}
	virtual ::java::sql::Blob* readBlob() {return nullptr;}
	virtual bool readBoolean() {return false;}
	virtual int8_t readByte() {return 0;}
	virtual $bytes* readBytes() {return nullptr;}
	virtual ::java::io::Reader* readCharacterStream() {return nullptr;}
	virtual ::java::sql::Clob* readClob() {return nullptr;}
	virtual ::java::sql::Date* readDate() {return nullptr;}
	virtual double readDouble() {return 0.0;}
	virtual float readFloat() {return 0.0;}
	virtual int32_t readInt() {return 0;}
	virtual int64_t readLong() {return 0;}
	virtual ::java::sql::NClob* readNClob() {return nullptr;}
	virtual $String* readNString() {return nullptr;}
	virtual $Object* readObject() {return nullptr;}
	virtual $Object* readObject($Class* type);
	virtual ::java::sql::Ref* readRef() {return nullptr;}
	virtual ::java::sql::RowId* readRowId() {return nullptr;}
	virtual ::java::sql::SQLXML* readSQLXML() {return nullptr;}
	virtual int16_t readShort() {return 0;}
	virtual $String* readString() {return nullptr;}
	virtual ::java::sql::Time* readTime() {return nullptr;}
	virtual ::java::sql::Timestamp* readTimestamp() {return nullptr;}
	virtual ::java::net::URL* readURL() {return nullptr;}
	virtual bool wasNull() {return false;}
};

	} // sql
} // java

#endif // _java_sql_SQLInput_h_