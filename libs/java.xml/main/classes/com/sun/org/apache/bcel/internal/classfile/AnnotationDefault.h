#ifndef _com_sun_org_apache_bcel_internal_classfile_AnnotationDefault_h_
#define _com_sun_org_apache_bcel_internal_classfile_AnnotationDefault_h_
//$ class com.sun.org.apache.bcel.internal.classfile.AnnotationDefault
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class ElementValue;
							class Visitor;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataInput;
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

class AnnotationDefault : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(AnnotationDefault, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	AnnotationDefault();
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, ::com::sun::org::apache::bcel::internal::classfile::ElementValue* defaultValue, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* dos) override;
	::com::sun::org::apache::bcel::internal::classfile::ElementValue* getDefaultValue();
	void setDefaultValue(::com::sun::org::apache::bcel::internal::classfile::ElementValue* defaultValue);
	::com::sun::org::apache::bcel::internal::classfile::ElementValue* defaultValue = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_AnnotationDefault_h_