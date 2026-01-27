#ifndef _com_sun_org_apache_xerces_internal_dom_RangeImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_RangeImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.RangeImpl
//$ extends org.w3c.dom.ranges.Range

#include <org/w3c/dom/ranges/Range.h>

#pragma push_macro("CLONE_CONTENTS")
#undef CLONE_CONTENTS
#pragma push_macro("DELETE_CONTENTS")
#undef DELETE_CONTENTS
#pragma push_macro("EXTRACT_CONTENTS")
#undef EXTRACT_CONTENTS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DocumentImpl;
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
			class CharacterData;
			class DocumentFragment;
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

class RangeImpl : public ::org::w3c::dom::ranges::Range {
	$class(RangeImpl, $NO_CLASS_INIT, ::org::w3c::dom::ranges::Range)
public:
	RangeImpl();
	void init$(::com::sun::org::apache::xerces::internal::dom::DocumentImpl* document);
	virtual void checkIndex(::org::w3c::dom::Node* refNode, int32_t offset);
	virtual ::org::w3c::dom::DocumentFragment* cloneContents() override;
	virtual ::org::w3c::dom::ranges::Range* cloneRange() override;
	virtual void collapse(bool toStart) override;
	virtual int16_t compareBoundaryPoints(int16_t how, ::org::w3c::dom::ranges::Range* sourceRange) override;
	virtual void deleteContents() override;
	virtual void deleteData(::org::w3c::dom::CharacterData* node, int32_t offset, int32_t count);
	virtual void detach() override;
	virtual ::org::w3c::dom::DocumentFragment* extractContents() override;
	virtual bool getCollapsed() override;
	virtual ::org::w3c::dom::Node* getCommonAncestorContainer() override;
	virtual ::org::w3c::dom::Node* getEndContainer() override;
	virtual int32_t getEndOffset() override;
	::org::w3c::dom::Node* getRootContainer(::org::w3c::dom::Node* node);
	::org::w3c::dom::Node* getSelectedNode(::org::w3c::dom::Node* container, int32_t offset);
	virtual ::org::w3c::dom::Node* getStartContainer() override;
	virtual int32_t getStartOffset() override;
	bool hasLegalRootContainer(::org::w3c::dom::Node* node);
	virtual int32_t indexOf(::org::w3c::dom::Node* child, ::org::w3c::dom::Node* parent);
	virtual void insertData(::org::w3c::dom::CharacterData* node, int32_t index, $String* insert);
	virtual void insertNode(::org::w3c::dom::Node* newNode) override;
	virtual void insertedNodeFromDOM(::org::w3c::dom::Node* node);
	virtual bool isAncestorOf(::org::w3c::dom::Node* a, ::org::w3c::dom::Node* b);
	bool isLegalContainedNode(::org::w3c::dom::Node* node);
	bool isLegalContainer(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* nextNode(::org::w3c::dom::Node* node, bool visitChildren);
	virtual void receiveDeletedText(::org::w3c::dom::Node* node, int32_t offset, int32_t count);
	virtual void receiveInsertedText(::org::w3c::dom::Node* node, int32_t index, int32_t len);
	virtual void receiveReplacedText(::org::w3c::dom::Node* node);
	virtual void receiveSplitData(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* newNode, int32_t offset);
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* child);
	virtual void removeNode(::org::w3c::dom::Node* node);
	virtual void selectNode(::org::w3c::dom::Node* refNode) override;
	virtual void selectNodeContents(::org::w3c::dom::Node* refNode) override;
	virtual void setEnd(::org::w3c::dom::Node* refNode, int32_t offset) override;
	virtual void setEndAfter(::org::w3c::dom::Node* refNode) override;
	virtual void setEndBefore(::org::w3c::dom::Node* refNode) override;
	virtual void setStart(::org::w3c::dom::Node* refNode, int32_t offset) override;
	virtual void setStartAfter(::org::w3c::dom::Node* refNode) override;
	virtual void setStartBefore(::org::w3c::dom::Node* refNode) override;
	virtual void signalSplitData(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* newNode, int32_t offset);
	virtual void surroundContents(::org::w3c::dom::Node* newParent) override;
	virtual $String* toString() override;
	::org::w3c::dom::DocumentFragment* traverseCommonAncestors(::org::w3c::dom::Node* startAncestor, ::org::w3c::dom::Node* endAncestor, int32_t how);
	::org::w3c::dom::DocumentFragment* traverseCommonEndContainer(::org::w3c::dom::Node* startAncestor, int32_t how);
	::org::w3c::dom::DocumentFragment* traverseCommonStartContainer(::org::w3c::dom::Node* endAncestor, int32_t how);
	::org::w3c::dom::DocumentFragment* traverseContents(int32_t how);
	::org::w3c::dom::Node* traverseFullySelected(::org::w3c::dom::Node* n, int32_t how);
	::org::w3c::dom::Node* traverseLeftBoundary(::org::w3c::dom::Node* root, int32_t how);
	::org::w3c::dom::Node* traverseNode(::org::w3c::dom::Node* n, bool isFullySelected, bool isLeft, int32_t how);
	::org::w3c::dom::Node* traversePartiallySelected(::org::w3c::dom::Node* n, int32_t how);
	::org::w3c::dom::Node* traverseRightBoundary(::org::w3c::dom::Node* root, int32_t how);
	::org::w3c::dom::DocumentFragment* traverseSameContainer(int32_t how);
	::org::w3c::dom::Node* traverseTextNode(::org::w3c::dom::Node* n, bool isLeft, int32_t how);
	::com::sun::org::apache::xerces::internal::dom::DocumentImpl* fDocument = nullptr;
	::org::w3c::dom::Node* fStartContainer = nullptr;
	::org::w3c::dom::Node* fEndContainer = nullptr;
	int32_t fStartOffset = 0;
	int32_t fEndOffset = 0;
	bool fIsCollapsed = false;
	bool fDetach = false;
	::org::w3c::dom::Node* fInsertNode = nullptr;
	::org::w3c::dom::Node* fDeleteNode = nullptr;
	::org::w3c::dom::Node* fSplitNode = nullptr;
	bool fInsertedFromRange = false;
	::org::w3c::dom::Node* fRemoveChild = nullptr;
	static const int32_t EXTRACT_CONTENTS = 1;
	static const int32_t CLONE_CONTENTS = 2;
	static const int32_t DELETE_CONTENTS = 3;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CLONE_CONTENTS")
#pragma pop_macro("DELETE_CONTENTS")
#pragma pop_macro("EXTRACT_CONTENTS")

#endif // _com_sun_org_apache_xerces_internal_dom_RangeImpl_h_