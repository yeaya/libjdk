#ifndef _com_sun_org_apache_bcel_internal_classfile_Utility$JavaReader_h_
#define _com_sun_org_apache_bcel_internal_classfile_Utility$JavaReader_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Utility$JavaReader
//$ extends java.io.FilterReader

#include <java/io/FilterReader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Reader;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Utility$JavaReader : public ::java::io::FilterReader {
	$class(Utility$JavaReader, $NO_CLASS_INIT, ::java::io::FilterReader)
public:
	Utility$JavaReader();
	void init$(::java::io::Reader* in);
	using ::java::io::FilterReader::read;
	virtual int32_t read() override;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Utility$JavaReader_h_