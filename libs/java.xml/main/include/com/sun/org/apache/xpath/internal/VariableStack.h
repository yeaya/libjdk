#ifndef _com_sun_org_apache_xpath_internal_VariableStack_h_
#define _com_sun_org_apache_xpath_internal_VariableStack_h_
//$ class com.sun.org.apache.xpath.internal.VariableStack
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("CLEARLIMITATION")
#undef CLEARLIMITATION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class QName;
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
				namespace xpath {
					namespace internal {
						class XPathContext;
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
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
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
				namespace xpath {
					namespace internal {

class $import VariableStack : public ::java::lang::Cloneable {
	$class(VariableStack, 0, ::java::lang::Cloneable)
public:
	VariableStack();
	void init$();
	virtual void clearLocalSlots(int32_t start, int32_t len);
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* elementAt(int32_t i);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getGlobalVariable(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getGlobalVariable(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t index, bool destructiveOK);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getLocalVariable(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t index);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getLocalVariable(int32_t index, int32_t frame);
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getLocalVariable(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t index, bool destructiveOK);
	virtual int32_t getStackFrame();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* getVariableOrParam(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::com::sun::org::apache::xml::internal::utils::QName* qname);
	virtual bool isLocalSet(int32_t index);
	virtual int32_t link(int32_t size);
	virtual void reset();
	virtual void setGlobalVariable(int32_t index, ::com::sun::org::apache::xpath::internal::objects::XObject* val);
	virtual void setLocalVariable(int32_t index, ::com::sun::org::apache::xpath::internal::objects::XObject* val);
	virtual void setLocalVariable(int32_t index, ::com::sun::org::apache::xpath::internal::objects::XObject* val, int32_t stackFrame);
	virtual void setStackFrame(int32_t sf);
	virtual int32_t size();
	virtual void unlink();
	virtual void unlink(int32_t currentFrame);
	static const int32_t CLEARLIMITATION = 1024;
	$Array<::com::sun::org::apache::xpath::internal::objects::XObject>* _stackFrames = nullptr;
	int32_t _frameTop = 0;
	int32_t _currentFrameBottom = 0;
	$ints* _links = nullptr;
	int32_t _linksTop = 0;
	static $Array<::com::sun::org::apache::xpath::internal::objects::XObject>* m_nulls;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CLEARLIMITATION")

#endif // _com_sun_org_apache_xpath_internal_VariableStack_h_