#ifndef _java_sql_Blob_h_
#define _java_sql_Blob_h_
//$ interface java.sql.Blob
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}

namespace java {
	namespace sql {

class $import Blob : public ::java::lang::Object {
	$interface(Blob, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void free() {}
	virtual ::java::io::InputStream* getBinaryStream() {return nullptr;}
	virtual ::java::io::InputStream* getBinaryStream(int64_t pos, int64_t length) {return nullptr;}
	virtual $bytes* getBytes(int64_t pos, int32_t length) {return nullptr;}
	virtual int64_t length() {return 0;}
	virtual int64_t position($bytes* pattern, int64_t start) {return 0;}
	virtual int64_t position(::java::sql::Blob* pattern, int64_t start) {return 0;}
	virtual ::java::io::OutputStream* setBinaryStream(int64_t pos) {return nullptr;}
	virtual int32_t setBytes(int64_t pos, $bytes* bytes) {return 0;}
	virtual int32_t setBytes(int64_t pos, $bytes* bytes, int32_t offset, int32_t len) {return 0;}
	virtual void truncate(int64_t len) {}
};

	} // sql
} // java

#endif // _java_sql_Blob_h_