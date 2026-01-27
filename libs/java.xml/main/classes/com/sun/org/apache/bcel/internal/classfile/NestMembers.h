#ifndef _com_sun_org_apache_bcel_internal_classfile_NestMembers_h_
#define _com_sun_org_apache_bcel_internal_classfile_NestMembers_h_
//$ class com.sun.org.apache.bcel.internal.classfile.NestMembers
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
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

class NestMembers : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(NestMembers, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	NestMembers();
	void init$(::com::sun::org::apache::bcel::internal::classfile::NestMembers* c);
	void init$(int32_t name_index, int32_t length, $ints* classes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$StringArray* getClassNames();
	$ints* getClasses();
	int32_t getNumberClasses();
	void setClasses($ints* classes);
	virtual $String* toString() override;
	$ints* classes = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_NestMembers_h_