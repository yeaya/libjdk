#ifndef _com_sun_org_apache_xalan_internal_xsltc_NodeIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_NodeIterator_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.NodeIterator
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("END")
#undef END

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

class NodeIterator : public ::java::lang::Cloneable {
	$interface(NodeIterator, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* cloneIterator() {return nullptr;}
	virtual int32_t getLast() {return 0;}
	virtual int32_t getPosition() {return 0;}
	virtual void gotoMark() {}
	virtual bool isReverse() {return false;}
	virtual int32_t next() {return 0;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* reset() {return nullptr;}
	virtual void setMark() {}
	virtual void setRestartable(bool isRestartable) {}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::NodeIterator* setStartNode(int32_t node) {return nullptr;}
	static const int32_t END = -1; // DTM.NULL
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("END")

#endif // _com_sun_org_apache_xalan_internal_xsltc_NodeIterator_h_