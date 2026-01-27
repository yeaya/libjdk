#ifndef _com_sun_org_apache_bcel_internal_classfile_Signature$MyByteArrayInputStream_h_
#define _com_sun_org_apache_bcel_internal_classfile_Signature$MyByteArrayInputStream_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream
//$ extends java.io.ByteArrayInputStream

#include <java/io/ByteArrayInputStream.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Signature$MyByteArrayInputStream : public ::java::io::ByteArrayInputStream {
	$class(Signature$MyByteArrayInputStream, $NO_CLASS_INIT, ::java::io::ByteArrayInputStream)
public:
	Signature$MyByteArrayInputStream();
	void init$($String* data);
	$String* getData();
	using ::java::io::ByteArrayInputStream::read;
	using ::java::io::ByteArrayInputStream::readNBytes;
	void unread();
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Signature$MyByteArrayInputStream_h_