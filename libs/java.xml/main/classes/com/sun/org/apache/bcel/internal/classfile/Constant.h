#ifndef _com_sun_org_apache_bcel_internal_classfile_Constant_h_
#define _com_sun_org_apache_bcel_internal_classfile_Constant_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Constant
//$ extends java.lang.Cloneable
//$ implements com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <java/lang/Cloneable.h>

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

class Constant : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(Constant, 0, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	Constant();
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override {}
	virtual void finalize() override;
	void init$(int8_t tag);
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Constant* copy();
	virtual void dump(::java::io::DataOutputStream* file) {}
	virtual bool equals(Object$* obj) override;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* getComparator();
	int8_t getTag();
	virtual int32_t hashCode() override;
	static ::com::sun::org::apache::bcel::internal::classfile::Constant* readConstant(::java::io::DataInput* dataInput);
	static void setComparator(::com::sun::org::apache::bcel::internal::util::BCELComparator* comparator);
	virtual $String* toString() override;
	static ::com::sun::org::apache::bcel::internal::util::BCELComparator* bcelComparator;
	int8_t tag = 0;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Constant_h_