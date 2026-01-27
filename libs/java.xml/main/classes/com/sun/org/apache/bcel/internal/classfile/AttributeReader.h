#ifndef _com_sun_org_apache_bcel_internal_classfile_AttributeReader_h_
#define _com_sun_org_apache_bcel_internal_classfile_AttributeReader_h_
//$ interface com.sun.org.apache.bcel.internal.classfile.AttributeReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
							class ConstantPool;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataInputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class AttributeReader : public ::java::lang::Object {
	$interface(AttributeReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* createAttribute(int32_t name_index, int32_t length, ::java::io::DataInputStream* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool) {return nullptr;}
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_AttributeReader_h_