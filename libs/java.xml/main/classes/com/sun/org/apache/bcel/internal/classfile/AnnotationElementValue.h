#ifndef _com_sun_org_apache_bcel_internal_classfile_AnnotationElementValue_h_
#define _com_sun_org_apache_bcel_internal_classfile_AnnotationElementValue_h_
//$ class com.sun.org.apache.bcel.internal.classfile.AnnotationElementValue
//$ extends com.sun.org.apache.bcel.internal.classfile.ElementValue

#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationEntry;
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
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class AnnotationElementValue : public ::com::sun::org::apache::bcel::internal::classfile::ElementValue {
	$class(AnnotationElementValue, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::ElementValue)
public:
	AnnotationElementValue();
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* annotationEntry, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cpool);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* getAnnotationEntry();
	virtual $String* stringifyValue() override;
	virtual $String* toString() override;
	::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* annotationEntry = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_AnnotationElementValue_h_