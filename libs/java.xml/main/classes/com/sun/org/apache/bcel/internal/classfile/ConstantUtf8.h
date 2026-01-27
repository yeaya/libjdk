#ifndef _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8_h_
#define _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ConstantUtf8
//$ extends com.sun.org.apache.bcel.internal.classfile.Constant

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
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

class ConstantUtf8 : public ::com::sun::org::apache::bcel::internal::classfile::Constant {
	$class(ConstantUtf8, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Constant)
public:
	ConstantUtf8();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8* constantUtf8);
	void init$(::java::io::DataInput* dataInput);
	void init$($String* value);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	static void clearCache();
	virtual void dump(::java::io::DataOutputStream* file) override;
	$String* getBytes();
	static ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8* getCachedInstance($String* value);
	static ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8* getInstance(::java::io::DataInput* dataInput);
	static ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8* getInstance($String* value);
	void setBytes($String* bytes);
	virtual $String* toString() override;
	$String* value = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ConstantUtf8_h_