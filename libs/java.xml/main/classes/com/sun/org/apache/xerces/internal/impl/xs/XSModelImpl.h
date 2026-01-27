#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSModelImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSModelImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl
//$ extends java.util.AbstractList
//$ implements com.sun.org.apache.xerces.internal.xs.XSModel,com.sun.org.apache.xerces.internal.xs.XSNamespaceItemList

#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItemList.h>
#include <java/lang/Array.h>
#include <java/util/AbstractList.h>

#pragma push_macro("GLOBAL_COMP")
#undef GLOBAL_COMP
#pragma push_macro("MAX_COMP_IDX")
#undef MAX_COMP_IDX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
							}
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XSObjectListImpl;
								}
							}
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
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolHash;
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
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSAttributeDeclaration;
							class XSAttributeGroupDefinition;
							class XSElementDeclaration;
							class XSIDCDefinition;
							class XSModelGroupDefinition;
							class XSNamedMap;
							class XSNamespaceItem;
							class XSNotationDeclaration;
							class XSObjectList;
							class XSTypeDefinition;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class ListIterator;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class XSModelImpl : public ::java::util::AbstractList, public ::com::sun::org::apache::xerces::internal::xs::XSModel, public ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList {
	$class(XSModelImpl, 0, ::java::util::AbstractList, ::com::sun::org::apache::xerces::internal::xs::XSModel, ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList)
public:
	XSModelImpl();
	virtual bool add(Object$* arg0) override;
	virtual void add(int32_t arg0, Object$* arg1) override;
	virtual bool addAll(int32_t arg0, ::java::util::Collection* arg1) override;
	virtual bool addAll(::java::util::Collection* arg0) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* arg0) override;
	virtual bool containsAll(::java::util::Collection* arg0) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* arg0) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* arg0) override;
	virtual bool isEmpty() override;
	virtual int32_t lastIndexOf(Object$* arg0) override;
	void init$($Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars);
	void init$($Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* grammars, int16_t s4sVersion);
	::com::sun::org::apache::xerces::internal::util::SymbolHash* buildSubGroups();
	::com::sun::org::apache::xerces::internal::util::SymbolHash* buildSubGroups_Org();
	virtual $Object* get(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration* getAttributeDeclaration($String* name, $String* namespace$, $String* loc);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition* getAttributeGroup($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition* getAttributeGroup($String* name, $String* namespace$, $String* loc);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getComponents(int16_t objectType) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamedMap* getComponentsByNamespace(int16_t objectType, $String* namespace$) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* getElementDeclaration($String* name, $String* namespace$, $String* loc);
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* getGlobalElements();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getIDCDefinition($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition* getIDCDefinition($String* name, $String* namespace$, $String* loc);
	virtual int32_t getLength() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition* getModelGroupDefinition($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition* getModelGroupDefinition($String* name, $String* namespace$, $String* loc);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList* getNamespaceItems() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getNamespaces() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotationDeclaration($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration* getNotationDeclaration($String* name, $String* namespace$, $String* loc);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getSubstitutionGroup(::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration* head) override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition($String* name, $String* namespace$) override;
	::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* getTypeDefinition($String* name, $String* namespace$, $String* loc);
	bool hasIDConstraints();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* item(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	::java::util::ListIterator* listIterator0(int32_t index);
	static $String* null2EmptyString($String* str);
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* remove(int32_t arg0) override;
	virtual bool remove(Object$* arg0) override;
	virtual bool removeAll(::java::util::Collection* arg0) override;
	virtual bool removeIf(::java::util::function::Predicate* arg0) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* arg0) override;
	virtual bool retainAll(::java::util::Collection* arg0) override;
	virtual $Object* set(int32_t arg0, Object$* arg1) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* arg0) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t arg0, int32_t arg1) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* arg0) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	void toArray0($ObjectArray* a);
	virtual $String* toString() override;
	static const int16_t MAX_COMP_IDX = 16; // XSTypeDefinition.SIMPLE_TYPE
	static $booleans* GLOBAL_COMP;
	int32_t fGrammarCount = 0;
	$StringArray* fNamespaces = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>* fGrammarList = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fGrammarMap = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolHash* fSubGroupMap = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSNamedMap>* fGlobalComponents = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::xs::XSNamedMap, 2>* fNSComponents = nullptr;
	::com::sun::org::apache::xerces::internal::xs::StringList* fNamespacesList = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
	bool fHasIDC = false;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("GLOBAL_COMP")
#pragma pop_macro("MAX_COMP_IDX")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSModelImpl_h_