#ifndef _com_sun_org_apache_bcel_internal_classfile_Utility$JavaWriter_h_
#define _com_sun_org_apache_bcel_internal_classfile_Utility$JavaWriter_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Utility$JavaWriter
//$ extends java.io.FilterWriter

#include <java/io/FilterWriter.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Utility$JavaWriter : public ::java::io::FilterWriter {
	$class(Utility$JavaWriter, $NO_CLASS_INIT, ::java::io::FilterWriter)
public:
	Utility$JavaWriter();
	void init$(::java::io::Writer* out);
	using ::java::io::FilterWriter::write;
	virtual void write(int32_t b) override;
	virtual void write($chars* cbuf, int32_t off, int32_t len) override;
	virtual void write($String* str, int32_t off, int32_t len) override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Utility$JavaWriter_h_