#ifndef _com_sun_org_apache_xerces_internal_dom_events_MutationEventImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_events_MutationEventImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.events.MutationEventImpl
//$ extends com.sun.org.apache.xerces.internal.dom.events.EventImpl
//$ implements org.w3c.dom.events.MutationEvent

#include <com/sun/org/apache/xerces/internal/dom/events/EventImpl.h>
#include <org/w3c/dom/events/MutationEvent.h>

#pragma push_macro("DOM_ATTR_MODIFIED")
#undef DOM_ATTR_MODIFIED
#pragma push_macro("DOM_CHARACTER_DATA_MODIFIED")
#undef DOM_CHARACTER_DATA_MODIFIED
#pragma push_macro("DOM_NODE_INSERTED")
#undef DOM_NODE_INSERTED
#pragma push_macro("DOM_NODE_INSERTED_INTO_DOCUMENT")
#undef DOM_NODE_INSERTED_INTO_DOCUMENT
#pragma push_macro("DOM_NODE_REMOVED")
#undef DOM_NODE_REMOVED
#pragma push_macro("DOM_NODE_REMOVED_FROM_DOCUMENT")
#undef DOM_NODE_REMOVED_FROM_DOCUMENT
#pragma push_macro("DOM_SUBTREE_MODIFIED")
#undef DOM_SUBTREE_MODIFIED

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							namespace events {

class MutationEventImpl : public ::com::sun::org::apache::xerces::internal::dom::events::EventImpl, public ::org::w3c::dom::events::MutationEvent {
	$class(MutationEventImpl, 0, ::com::sun::org::apache::xerces::internal::dom::events::EventImpl, ::org::w3c::dom::events::MutationEvent)
public:
	MutationEventImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual bool getBubbles() override;
	virtual bool getCancelable() override;
	virtual ::org::w3c::dom::events::EventTarget* getCurrentTarget() override;
	virtual int16_t getEventPhase() override;
	virtual ::org::w3c::dom::events::EventTarget* getTarget() override;
	virtual int64_t getTimeStamp() override;
	virtual $String* getType() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int16_t getAttrChange() override;
	virtual $String* getAttrName() override;
	virtual $String* getNewValue() override;
	virtual $String* getPrevValue() override;
	virtual ::org::w3c::dom::Node* getRelatedNode() override;
	virtual void initEvent($String* eventTypeArg, bool canBubbleArg, bool cancelableArg) override;
	virtual void initMutationEvent($String* typeArg, bool canBubbleArg, bool cancelableArg, ::org::w3c::dom::Node* relatedNodeArg, $String* prevValueArg, $String* newValueArg, $String* attrNameArg, int16_t attrChangeArg) override;
	virtual void preventDefault() override;
	virtual void stopPropagation() override;
	virtual $String* toString() override;
	::org::w3c::dom::Node* relatedNode = nullptr;
	$String* prevValue = nullptr;
	$String* newValue = nullptr;
	$String* attrName = nullptr;
	int16_t attrChange = 0;
	static $String* DOM_SUBTREE_MODIFIED;
	static $String* DOM_NODE_INSERTED;
	static $String* DOM_NODE_REMOVED;
	static $String* DOM_NODE_REMOVED_FROM_DOCUMENT;
	static $String* DOM_NODE_INSERTED_INTO_DOCUMENT;
	static $String* DOM_ATTR_MODIFIED;
	static $String* DOM_CHARACTER_DATA_MODIFIED;
};

							} // events
						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM_ATTR_MODIFIED")
#pragma pop_macro("DOM_CHARACTER_DATA_MODIFIED")
#pragma pop_macro("DOM_NODE_INSERTED")
#pragma pop_macro("DOM_NODE_INSERTED_INTO_DOCUMENT")
#pragma pop_macro("DOM_NODE_REMOVED")
#pragma pop_macro("DOM_NODE_REMOVED_FROM_DOCUMENT")
#pragma pop_macro("DOM_SUBTREE_MODIFIED")

#endif // _com_sun_org_apache_xerces_internal_dom_events_MutationEventImpl_h_