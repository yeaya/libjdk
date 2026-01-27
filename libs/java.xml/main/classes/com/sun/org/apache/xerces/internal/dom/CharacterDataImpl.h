#ifndef _com_sun_org_apache_xerces_internal_dom_CharacterDataImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_CharacterDataImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.CharacterDataImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ChildNode

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class NodeList;
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

class CharacterDataImpl : public ::com::sun::org::apache::xerces::internal::dom::ChildNode {
	$class(CharacterDataImpl, 0, ::com::sun::org::apache::xerces::internal::dom::ChildNode)
public:
	CharacterDataImpl();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* data);
	virtual void appendData($String* data);
	virtual void deleteData(int32_t offset, int32_t count);
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual $String* getData();
	virtual int32_t getLength() override;
	virtual $String* getNodeValue() override;
	virtual void insertData(int32_t offset, $String* data);
	virtual void internalDeleteData(int32_t offset, int32_t count, bool replace);
	virtual void internalInsertData(int32_t offset, $String* data, bool replace);
	virtual void replaceData(int32_t offset, int32_t count, $String* data);
	virtual void setData($String* value);
	virtual void setNodeValue($String* value) override;
	virtual void setNodeValueInternal($String* value);
	virtual void setNodeValueInternal($String* value, bool replace);
	virtual $String* substringData(int32_t offset, int32_t count);
	static const int64_t serialVersionUID = (int64_t)0x6E112D3B0D787B76;
	$String* data = nullptr;
	static ::org::w3c::dom::NodeList* singletonNodeList;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_CharacterDataImpl_h_