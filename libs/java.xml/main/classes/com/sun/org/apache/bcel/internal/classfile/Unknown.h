#ifndef _com_sun_org_apache_bcel_internal_classfile_Unknown_h_
#define _com_sun_org_apache_bcel_internal_classfile_Unknown_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Unknown
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
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Unknown : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(Unknown, 0, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	Unknown();
	void init$(::com::sun::org::apache::bcel::internal::classfile::Unknown* c);
	void init$(int32_t name_index, int32_t length, $bytes* bytes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$bytes* getBytes();
	virtual $String* getName() override;
	static $Array<::com::sun::org::apache::bcel::internal::classfile::Unknown>* getUnknownAttributes();
	void setBytes($bytes* bytes);
	virtual $String* toString() override;
	$bytes* bytes = nullptr;
	$String* name = nullptr;
	static ::java::util::Map* unknownAttributes;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Unknown_h_