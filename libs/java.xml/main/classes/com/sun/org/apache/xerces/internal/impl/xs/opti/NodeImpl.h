#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_NodeImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_NodeImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultNode

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

class NodeImpl : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultNode {
	$class(NodeImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultNode)
public:
	NodeImpl();
	void init$();
	void init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int16_t nodeType);
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getPrefix() override;
	virtual bool getReadOnly();
	virtual void setReadOnly(bool hide, bool deep);
	$String* prefix = nullptr;
	$String* localpart = nullptr;
	$String* rawname = nullptr;
	$String* uri = nullptr;
	int16_t nodeType = 0;
	bool hidden = false;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_NodeImpl_h_