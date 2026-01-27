#ifndef _com_sun_org_apache_bcel_internal_generic_TargetLostException_h_
#define _com_sun_org_apache_bcel_internal_generic_TargetLostException_h_
//$ class com.sun.org.apache.bcel.internal.generic.TargetLostException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class TargetLostException : public ::java::lang::Exception {
	$class(TargetLostException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	TargetLostException();
	void init$($Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* t, $String* mesg);
	$Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* getTargets();
	static const int64_t serialVersionUID = (int64_t)0xA0D612D715014400;
	$Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets = nullptr;
	TargetLostException(const TargetLostException& e);
	virtual void throw$() override;
	inline TargetLostException* operator ->() {
		return (TargetLostException*)throwing$;
	}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_TargetLostException_h_