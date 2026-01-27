#ifndef _com_sun_org_apache_bcel_internal_classfile_StackMap_h_
#define _com_sun_org_apache_bcel_internal_classfile_StackMap_h_
//$ class com.sun.org.apache.bcel.internal.classfile.StackMap
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
							class StackMapEntry;
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

class StackMap : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(StackMap, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	StackMap();
	void init$(int32_t name_index, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapEntry>* map, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	int32_t getMapLength();
	$Array<::com::sun::org::apache::bcel::internal::classfile::StackMapEntry>* getStackMap();
	void setStackMap($Array<::com::sun::org::apache::bcel::internal::classfile::StackMapEntry>* map);
	virtual $String* toString() override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::StackMapEntry>* map = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_StackMap_h_