#ifndef _java_sql_SQLXML_h_
#define _java_sql_SQLXML_h_
//$ interface java.sql.SQLXML
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SQLXML")
#undef SQLXML

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Result;
			class Source;
		}
	}
}

namespace java {
	namespace sql {

class $export SQLXML : public ::java::lang::Object {
	$interface(SQLXML, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void free() {}
	virtual ::java::io::InputStream* getBinaryStream() {return nullptr;}
	virtual ::java::io::Reader* getCharacterStream() {return nullptr;}
	virtual ::javax::xml::transform::Source* getSource($Class* sourceClass) {return nullptr;}
	virtual $String* getString() {return nullptr;}
	virtual ::java::io::OutputStream* setBinaryStream() {return nullptr;}
	virtual ::java::io::Writer* setCharacterStream() {return nullptr;}
	virtual ::javax::xml::transform::Result* setResult($Class* resultClass) {return nullptr;}
	virtual void setString($String* value) {}
};

	} // sql
} // java

#pragma pop_macro("SQLXML")

#endif // _java_sql_SQLXML_h_