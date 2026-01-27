#ifndef _com_sun_org_apache_bcel_internal_classfile_Field_h_
#define _com_sun_org_apache_bcel_internal_classfile_Field_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Field
//$ extends com.sun.org.apache.bcel.internal.classfile.FieldOrMethod

#include <com/sun/org/apache/bcel/internal/classfile/FieldOrMethod.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
							class ConstantPool;
							class ConstantValue;
							class Visitor;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Type;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {
							class BCELComparator;
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
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Field : public ::com::sun::org::apache::bcel::internal::classfile::FieldOrMethod {
	$class(Field, 0, ::com::sun::org::apache::bcel::internal::classfile::FieldOrMethod)
public:
	Field();
	void init$(::com::sun::org::apache::bcel::internal::classfile::Field* c);
	void init$(::java::io::DataInput* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t access_flags, int32_t name_index, int32_t signature_index, $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::Field* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool);
	virtual bool equals(Object$* obj) override;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* getComparator();
	::com::sun::org::apache::bcel::internal::classfile::ConstantValue* getConstantValue();
	::com::sun::org::apache::bcel::internal::generic::Type* getType();
	virtual int32_t hashCode() override;
	static void setComparator(::com::sun::org::apache::bcel::internal::util::BCELComparator* comparator);
	virtual $String* toString() override;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* bcelComparator;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Field_h_