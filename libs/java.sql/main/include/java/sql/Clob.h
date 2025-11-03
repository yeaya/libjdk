#ifndef _java_sql_Clob_h_
#define _java_sql_Clob_h_
//$ interface java.sql.Clob
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}

namespace java {
	namespace sql {

class $import Clob : public ::java::lang::Object {
	$interface(Clob, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void free() {}
	virtual ::java::io::InputStream* getAsciiStream() {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream() {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream(int64_t pos, int64_t length) {return nullptr;}
	virtual $String* getSubString(int64_t pos, int32_t length) {return nullptr;}
	virtual int64_t length() {return 0;}
	virtual int64_t position($String* searchstr, int64_t start) {return 0;}
	virtual int64_t position(::java::sql::Clob* searchstr, int64_t start) {return 0;}
	virtual ::java::io::OutputStream* setAsciiStream(int64_t pos) {return nullptr;}
	virtual ::java::io::Writer* setCharacterStream(int64_t pos) {return nullptr;}
	virtual int32_t setString(int64_t pos, $String* str) {return 0;}
	virtual int32_t setString(int64_t pos, $String* str, int32_t offset, int32_t len) {return 0;}
	virtual void truncate(int64_t len) {}
};

	} // sql
} // java

#endif // _java_sql_Clob_h_