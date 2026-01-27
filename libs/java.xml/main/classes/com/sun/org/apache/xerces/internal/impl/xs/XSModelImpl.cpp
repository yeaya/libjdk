#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl$XSNamespaceItemListIterator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMap4Types.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItemList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/reflect/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARATION
#undef ATTRIBUTE_GROUP
#undef COMPLEX_TYPE
#undef ELEMENT_DECLARATION
#undef EMPTY_LIST
#undef EMPTY_MAP
#undef EMPTY_STRING
#undef GLOBAL_COMP
#undef IDENTITY_CONSTRAINT
#undef MAX_COMP_IDX
#undef MODEL_GROUP_DEFINITION
#undef NOTATION_DECLARATION
#undef SCHEMA_VERSION_1_0
#undef SIMPLE_TYPE
#undef TYPE_DEFINITION
#undef URI_SCHEMAFORSCHEMA

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $XSAnnotationImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>;
using $SymbolHashArray = $Array<::com::sun::org::apache::xerces::internal::util::SymbolHash>;
using $XSElementDeclarationArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration>;
using $XSNamedMapArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSNamedMap>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XSNamedMapArray2 = $Array<::com::sun::org::apache::xerces::internal::xs::XSNamedMap, 2>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSElementDeclHelper = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper;
using $XSModelImpl$XSNamespaceItemListIterator = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl$XSNamespaceItemListIterator;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $XSNamedMap4Types = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMap4Types;
using $XSNamedMapImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSAttributeGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSIDCDefinition = ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition;
using $XSModelGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSNamespaceItemList = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSModelImpl_FieldInfo_[] = {
	{"MAX_COMP_IDX", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSModelImpl, MAX_COMP_IDX)},
	{"GLOBAL_COMP", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSModelImpl, GLOBAL_COMP)},
	{"fGrammarCount", "I", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fGrammarCount)},
	{"fNamespaces", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fNamespaces)},
	{"fGrammarList", "[Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fGrammarList)},
	{"fGrammarMap", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fGrammarMap)},
	{"fSubGroupMap", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fSubGroupMap)},
	{"fGlobalComponents", "[Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fGlobalComponents)},
	{"fNSComponents", "[[Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fNSComponents)},
	{"fNamespacesList", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fNamespacesList)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PRIVATE, $field(XSModelImpl, fAnnotations)},
	{"fHasIDC", "Z", nullptr, $PRIVATE | $FINAL, $field(XSModelImpl, fHasIDC)},
	{}
};

$MethodInfo _XSModelImpl_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"*addAll", "(ILjava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"<init>", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $method(XSModelImpl, init$, void, $SchemaGrammarArray*)},
	{"<init>", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;S)V", nullptr, $PUBLIC, $method(XSModelImpl, init$, void, $SchemaGrammarArray*, int16_t)},
	{"buildSubGroups", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PRIVATE, $method(XSModelImpl, buildSubGroups, $SymbolHash*)},
	{"buildSubGroups_Org", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PRIVATE, $method(XSModelImpl, buildSubGroups_Org, $SymbolHash*)},
	{"get", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, get, $Object*, int32_t)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSModelImpl, getAnnotations, $XSObjectList*)},
	{"getAttributeDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getAttributeDeclaration, $XSAttributeDeclaration*, $String*, $String*)},
	{"getAttributeDeclaration", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC, $method(XSModelImpl, getAttributeDeclaration, $XSAttributeDeclaration*, $String*, $String*, $String*)},
	{"getAttributeGroup", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getAttributeGroup, $XSAttributeGroupDefinition*, $String*, $String*)},
	{"getAttributeGroup", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;", nullptr, $PUBLIC, $method(XSModelImpl, getAttributeGroup, $XSAttributeGroupDefinition*, $String*, $String*, $String*)},
	{"getComponents", "(S)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSModelImpl, getComponents, $XSNamedMap*, int16_t)},
	{"getComponentsByNamespace", "(SLjava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSModelImpl, getComponentsByNamespace, $XSNamedMap*, int16_t, $String*)},
	{"getElementDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getElementDeclaration, $XSElementDeclaration*, $String*, $String*)},
	{"getElementDeclaration", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC, $method(XSModelImpl, getElementDeclaration, $XSElementDeclaration*, $String*, $String*, $String*)},
	{"getGlobalElements", "()Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PRIVATE, $method(XSModelImpl, getGlobalElements, $XSObjectListImpl*)},
	{"getIDCDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getIDCDefinition, $XSIDCDefinition*, $String*, $String*)},
	{"getIDCDefinition", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC, $method(XSModelImpl, getIDCDefinition, $XSIDCDefinition*, $String*, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getLength, int32_t)},
	{"getModelGroupDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getModelGroupDefinition, $XSModelGroupDefinition*, $String*, $String*)},
	{"getModelGroupDefinition", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;", nullptr, $PUBLIC, $method(XSModelImpl, getModelGroupDefinition, $XSModelGroupDefinition*, $String*, $String*, $String*)},
	{"getNamespaceItems", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItemList;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getNamespaceItems, $XSNamespaceItemList*)},
	{"getNamespaces", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getNamespaces, $StringList*)},
	{"getNotationDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getNotationDeclaration, $XSNotationDeclaration*, $String*, $String*)},
	{"getNotationDeclaration", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC, $method(XSModelImpl, getNotationDeclaration, $XSNotationDeclaration*, $String*, $String*, $String*)},
	{"getSubstitutionGroup", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;)Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getSubstitutionGroup, $XSObjectList*, $XSElementDeclaration*)},
	{"getTypeDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, getTypeDefinition, $XSTypeDefinition*, $String*, $String*)},
	{"getTypeDefinition", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $method(XSModelImpl, getTypeDefinition, $XSTypeDefinition*, $String*, $String*, $String*)},
	{"hasIDConstraints", "()Z", nullptr, $PUBLIC, $method(XSModelImpl, hasIDConstraints, bool)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, item, $XSNamespaceItem*, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;", $PUBLIC, $virtualMethod(XSModelImpl, iterator, $Iterator*)},
	{"*lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"listIterator", "()Ljava/util/ListIterator;", "()Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;", $PUBLIC, $virtualMethod(XSModelImpl, listIterator, $ListIterator*)},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;", $PUBLIC, $virtualMethod(XSModelImpl, listIterator, $ListIterator*, int32_t)},
	{"listIterator0", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;", $PRIVATE, $method(XSModelImpl, listIterator0, $ListIterator*, int32_t)},
	{"null2EmptyString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(XSModelImpl, null2EmptyString, $String*, $String*)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replaceAll", "(Ljava/util/function/UnaryOperator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, size, int32_t)},
	{"*sort", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*subList", "(II)Ljava/util/List;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSModelImpl, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray0", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(XSModelImpl, toArray0, void, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSModelImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl$XSNamespaceItemListIterator", "com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl", "XSNamespaceItemListIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _XSModelImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl",
	"java.util.AbstractList",
	"com.sun.org.apache.xerces.internal.xs.XSModel,com.sun.org.apache.xerces.internal.xs.XSNamespaceItemList",
	_XSModelImpl_FieldInfo_,
	_XSModelImpl_MethodInfo_,
	"Ljava/util/AbstractList<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;Lcom/sun/org/apache/xerces/internal/xs/XSModel;Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItemList;",
	nullptr,
	_XSModelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl$XSNamespaceItemListIterator"
};

$Object* allocate$XSModelImpl($Class* clazz) {
	return $of($alloc(XSModelImpl));
}

bool XSModelImpl::add(Object$* arg0) {
	 return this->$AbstractList::add(arg0);
}

$Object* XSModelImpl::set(int32_t arg0, Object$* arg1) {
	 return this->$AbstractList::set(arg0, arg1);
}

void XSModelImpl::add(int32_t arg0, Object$* arg1) {
	this->$AbstractList::add(arg0, arg1);
}

$Object* XSModelImpl::remove(int32_t arg0) {
	 return this->$AbstractList::remove(arg0);
}

int32_t XSModelImpl::indexOf(Object$* arg0) {
	 return this->$AbstractList::indexOf(arg0);
}

int32_t XSModelImpl::lastIndexOf(Object$* arg0) {
	 return this->$AbstractList::lastIndexOf(arg0);
}

void XSModelImpl::clear() {
	this->$AbstractList::clear();
}

bool XSModelImpl::addAll(int32_t arg0, $Collection* arg1) {
	 return this->$AbstractList::addAll(arg0, arg1);
}

$List* XSModelImpl::subList(int32_t arg0, int32_t arg1) {
	 return this->$AbstractList::subList(arg0, arg1);
}

bool XSModelImpl::equals(Object$* arg0) {
	 return this->$AbstractList::equals(arg0);
}

int32_t XSModelImpl::hashCode() {
	 return this->$AbstractList::hashCode();
}

bool XSModelImpl::isEmpty() {
	 return this->$AbstractList::isEmpty();
}

bool XSModelImpl::contains(Object$* arg0) {
	 return this->$AbstractList::contains(arg0);
}

bool XSModelImpl::remove(Object$* arg0) {
	 return this->$AbstractList::remove(arg0);
}

bool XSModelImpl::containsAll($Collection* arg0) {
	 return this->$AbstractList::containsAll(arg0);
}

bool XSModelImpl::addAll($Collection* arg0) {
	 return this->$AbstractList::addAll(arg0);
}

bool XSModelImpl::removeAll($Collection* arg0) {
	 return this->$AbstractList::removeAll(arg0);
}

bool XSModelImpl::retainAll($Collection* arg0) {
	 return this->$AbstractList::retainAll(arg0);
}

$String* XSModelImpl::toString() {
	 return this->$AbstractList::toString();
}

$ObjectArray* XSModelImpl::toArray($IntFunction* arg0) {
	 return this->$AbstractList::toArray(arg0);
}

bool XSModelImpl::removeIf($Predicate* arg0) {
	 return this->$AbstractList::removeIf(arg0);
}

$Spliterator* XSModelImpl::spliterator() {
	 return this->$AbstractList::spliterator();
}

$Stream* XSModelImpl::stream() {
	 return this->$AbstractList::stream();
}

$Stream* XSModelImpl::parallelStream() {
	 return this->$AbstractList::parallelStream();
}

void XSModelImpl::forEach($Consumer* arg0) {
	this->$AbstractList::forEach(arg0);
}

$Object* XSModelImpl::clone() {
	 return this->$AbstractList::clone();
}

void XSModelImpl::finalize() {
	this->$AbstractList::finalize();
}

void XSModelImpl::replaceAll($UnaryOperator* arg0) {
	this->$AbstractList::replaceAll(arg0);
}

void XSModelImpl::sort($Comparator* arg0) {
	this->$AbstractList::sort(arg0);
}

$booleans* XSModelImpl::GLOBAL_COMP = nullptr;

void XSModelImpl::init$($SchemaGrammarArray* grammars) {
	XSModelImpl::init$(grammars, $Constants::SCHEMA_VERSION_1_0);
}

void XSModelImpl::init$($SchemaGrammarArray* grammars, int16_t s4sVersion) {
	$useLocalCurrentObjectStackCache();
	$AbstractList::init$();
	$set(this, fAnnotations, nullptr);
	int32_t len = $nc(grammars)->length;
	int32_t initialSize = $Math::max(len + 1, 5);
	$var($StringArray, namespaces, $new($StringArray, initialSize));
	$var($SchemaGrammarArray, grammarList, $new($SchemaGrammarArray, initialSize));
	bool hasS4S = false;
	for (int32_t i = 0; i < len; ++i) {
		$var($SchemaGrammar, sg, grammars->get(i));
		$var($String, tns, $nc(sg)->getTargetNamespace());
		namespaces->set(i, tns);
		grammarList->set(i, sg);
		$init($SchemaSymbols);
		if (tns == $SchemaSymbols::URI_SCHEMAFORSCHEMA) {
			hasS4S = true;
		}
	}
	if (!hasS4S) {
		$init($SchemaSymbols);
		namespaces->set(len, $SchemaSymbols::URI_SCHEMAFORSCHEMA);
		grammarList->set(len++, $($SchemaGrammar::getS4SGrammar(s4sVersion)));
	}
	$var($SchemaGrammar, sg1, nullptr);
	$var($SchemaGrammar, sg2, nullptr);
	$var($List, gs, nullptr);
	int32_t i = 0;
	int32_t j = 0;
	int32_t k = 0;
	for (i = 0; i < len; ++i) {
		$assign(sg1, $nc(grammarList)->get(i));
		$assign(gs, $nc(sg1)->getImportedGrammars());
		for (j = gs == nullptr ? -1 : $nc(gs)->size() - 1; j >= 0; --j) {
			$assign(sg2, $cast($SchemaGrammar, gs->get(j)));
			for (k = 0; k < len; ++k) {
				if (sg2 == grammarList->get(k)) {
					break;
				}
			}
			if (k == len) {
				if (len == grammarList->length) {
					$var($StringArray, newSA, $new($StringArray, len * 2));
					$System::arraycopy(namespaces, 0, newSA, 0, len);
					$assign(namespaces, newSA);
					$var($SchemaGrammarArray, newGA, $new($SchemaGrammarArray, len * 2));
					$System::arraycopy(grammarList, 0, newGA, 0, len);
					$assign(grammarList, newGA);
				}
				$nc(namespaces)->set(len, $($nc(sg2)->getTargetNamespace()));
				grammarList->set(len, sg2);
				++len;
			}
		}
	}
	$set(this, fNamespaces, namespaces);
	$set(this, fGrammarList, grammarList);
	bool hasIDC = false;
	$set(this, fGrammarMap, $new($SymbolHash, len * 2));
	for (i = 0; i < len; ++i) {
		$nc(this->fGrammarMap)->put($(null2EmptyString($nc(this->fNamespaces)->get(i))), $nc(this->fGrammarList)->get(i));
		if ($nc($nc(this->fGrammarList)->get(i))->hasIDConstraints()) {
			hasIDC = true;
		}
	}
	this->fHasIDC = hasIDC;
	this->fGrammarCount = len;
	$set(this, fGlobalComponents, $new($XSNamedMapArray, XSModelImpl::MAX_COMP_IDX + 1));
	$set(this, fNSComponents, $new($XSNamedMapArray2, len, XSModelImpl::MAX_COMP_IDX + 1));
	$set(this, fNamespacesList, $new($StringListImpl, this->fNamespaces, this->fGrammarCount));
	$set(this, fSubGroupMap, buildSubGroups());
}

$SymbolHash* XSModelImpl::buildSubGroups_Org() {
	$useLocalCurrentObjectStackCache();
	$var($SubstitutionGroupHandler, sgHandler, $new($SubstitutionGroupHandler, nullptr));
	for (int32_t i = 0; i < this->fGrammarCount; ++i) {
		sgHandler->addSubstitutionGroup($($nc($nc(this->fGrammarList)->get(i))->getSubstitutionGroups()));
	}
	$var($XSNamedMap, elements, getComponents($XSConstants::ELEMENT_DECLARATION));
	int32_t len = $nc(elements)->getLength();
	$var($SymbolHash, subGroupMap, $new($SymbolHash, len * 2));
	$var($XSElementDecl, head, nullptr);
	$var($XSElementDeclarationArray, subGroup, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(head, $cast($XSElementDecl, elements->item(i)));
		$assign(subGroup, $fcast($XSElementDeclarationArray, sgHandler->getSubstitutionGroup(head)));
		$init($XSObjectListImpl);
		subGroupMap->put(head, $nc(subGroup)->length > 0 ? $of($$new($XSObjectListImpl, $fcast($XSObjectArray, subGroup), $nc(subGroup)->length)) : $of($XSObjectListImpl::EMPTY_LIST));
	}
	return subGroupMap;
}

$SymbolHash* XSModelImpl::buildSubGroups() {
	$useLocalCurrentObjectStackCache();
	$var($SubstitutionGroupHandler, sgHandler, $new($SubstitutionGroupHandler, nullptr));
	for (int32_t i = 0; i < this->fGrammarCount; ++i) {
		sgHandler->addSubstitutionGroup($($nc($nc(this->fGrammarList)->get(i))->getSubstitutionGroups()));
	}
	$var($XSObjectListImpl, elements, getGlobalElements());
	int32_t len = $nc(elements)->getLength();
	$var($SymbolHash, subGroupMap, $new($SymbolHash, len * 2));
	$var($XSElementDecl, head, nullptr);
	$var($XSElementDeclarationArray, subGroup, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(head, $cast($XSElementDecl, elements->item(i)));
		$assign(subGroup, $fcast($XSElementDeclarationArray, sgHandler->getSubstitutionGroup(head)));
		subGroupMap->put(head, $nc(subGroup)->length > 0 ? $of($$new($XSObjectListImpl, $fcast($XSObjectArray, subGroup), $nc(subGroup)->length)) : $of($XSObjectListImpl::EMPTY_LIST));
	}
	return subGroupMap;
}

$XSObjectListImpl* XSModelImpl::getGlobalElements() {
	$useLocalCurrentObjectStackCache();
	$var($SymbolHashArray, tables, $new($SymbolHashArray, this->fGrammarCount));
	int32_t length = 0;
	for (int32_t i = 0; i < this->fGrammarCount; ++i) {
		tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fAllGlobalElemDecls);
		length += $nc(tables->get(i))->getLength();
	}
	if (length == 0) {
		$init($XSObjectListImpl);
		return $XSObjectListImpl::EMPTY_LIST;
	}
	$var($XSObjectArray, components, $new($XSObjectArray, length));
	int32_t start = 0;
	for (int32_t i = 0; i < this->fGrammarCount; ++i) {
		$nc(tables->get(i))->getValues(components, start);
		start += $nc(tables->get(i))->getLength();
	}
	return $new($XSObjectListImpl, components, length);
}

$StringList* XSModelImpl::getNamespaces() {
	return this->fNamespacesList;
}

$XSNamespaceItemList* XSModelImpl::getNamespaceItems() {
	return this;
}

$XSNamedMap* XSModelImpl::getComponents(int16_t objectType) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (objectType <= 0 || objectType > XSModelImpl::MAX_COMP_IDX || !$nc(XSModelImpl::GLOBAL_COMP)->get(objectType)) {
			$init($XSNamedMapImpl);
			return $XSNamedMapImpl::EMPTY_MAP;
		}
		$var($SymbolHashArray, tables, $new($SymbolHashArray, this->fGrammarCount));
		if ($nc(this->fGlobalComponents)->get(objectType) == nullptr) {
			for (int32_t i = 0; i < this->fGrammarCount; ++i) {
				switch (objectType) {
				case $XSConstants::TYPE_DEFINITION:
					{}
				case $XSTypeDefinition::COMPLEX_TYPE:
					{}
				case $XSTypeDefinition::SIMPLE_TYPE:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalTypeDecls);
						break;
					}
				case $XSConstants::ATTRIBUTE_DECLARATION:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalAttrDecls);
						break;
					}
				case $XSConstants::ELEMENT_DECLARATION:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalElemDecls);
						break;
					}
				case $XSConstants::ATTRIBUTE_GROUP:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalAttrGrpDecls);
						break;
					}
				case $XSConstants::MODEL_GROUP_DEFINITION:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalGroupDecls);
						break;
					}
				case $XSConstants::NOTATION_DECLARATION:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalNotationDecls);
						break;
					}
				case $XSConstants::IDENTITY_CONSTRAINT:
					{
						tables->set(i, $nc($nc(this->fGrammarList)->get(i))->fGlobalIDConstraintDecls);
						break;
					}
				}
			}
			if (objectType == $XSTypeDefinition::COMPLEX_TYPE || objectType == $XSTypeDefinition::SIMPLE_TYPE) {
				$nc(this->fGlobalComponents)->set(objectType, $$new($XSNamedMap4Types, this->fNamespaces, tables, this->fGrammarCount, objectType));
			} else {
				$nc(this->fGlobalComponents)->set(objectType, $$new($XSNamedMapImpl, this->fNamespaces, tables, this->fGrammarCount));
			}
		}
		return $nc(this->fGlobalComponents)->get(objectType);
	}
}

$XSNamedMap* XSModelImpl::getComponentsByNamespace(int16_t objectType, $String* namespace$) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (objectType <= 0 || objectType > XSModelImpl::MAX_COMP_IDX || !$nc(XSModelImpl::GLOBAL_COMP)->get(objectType)) {
			$init($XSNamedMapImpl);
			return $XSNamedMapImpl::EMPTY_MAP;
		}
		int32_t i = 0;
		if (namespace$ != nullptr) {
			for (; i < this->fGrammarCount; ++i) {
				if (namespace$->equals($nc(this->fNamespaces)->get(i))) {
					break;
				}
			}
		} else {
			for (; i < this->fGrammarCount; ++i) {
				if ($nc(this->fNamespaces)->get(i) == nullptr) {
					break;
				}
			}
		}
		if (i == this->fGrammarCount) {
			$init($XSNamedMapImpl);
			return $XSNamedMapImpl::EMPTY_MAP;
		}
		if ($nc($nc(this->fNSComponents)->get(i))->get(objectType) == nullptr) {
			$var($SymbolHash, table, nullptr);
			switch (objectType) {
			case $XSConstants::TYPE_DEFINITION:
				{}
			case $XSTypeDefinition::COMPLEX_TYPE:
				{}
			case $XSTypeDefinition::SIMPLE_TYPE:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalTypeDecls);
					break;
				}
			case $XSConstants::ATTRIBUTE_DECLARATION:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalAttrDecls);
					break;
				}
			case $XSConstants::ELEMENT_DECLARATION:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalElemDecls);
					break;
				}
			case $XSConstants::ATTRIBUTE_GROUP:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalAttrGrpDecls);
					break;
				}
			case $XSConstants::MODEL_GROUP_DEFINITION:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalGroupDecls);
					break;
				}
			case $XSConstants::NOTATION_DECLARATION:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalNotationDecls);
					break;
				}
			case $XSConstants::IDENTITY_CONSTRAINT:
				{
					$assign(table, $nc($nc(this->fGrammarList)->get(i))->fGlobalIDConstraintDecls);
					break;
				}
			}
			if (objectType == $XSTypeDefinition::COMPLEX_TYPE || objectType == $XSTypeDefinition::SIMPLE_TYPE) {
				$nc($nc(this->fNSComponents)->get(i))->set(objectType, $$new($XSNamedMap4Types, namespace$, table, objectType));
			} else {
				$nc($nc(this->fNSComponents)->get(i))->set(objectType, $$new($XSNamedMapImpl, namespace$, table));
			}
		}
		return $nc($nc(this->fNSComponents)->get(i))->get(objectType);
	}
}

$XSTypeDefinition* XSModelImpl::getTypeDefinition($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSTypeDefinition, $nc($nc(sg)->fGlobalTypeDecls)->get(name));
}

$XSTypeDefinition* XSModelImpl::getTypeDefinition($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getGlobalTypeDecl(name, loc);
}

$XSAttributeDeclaration* XSModelImpl::getAttributeDeclaration($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSAttributeDeclaration, $nc($nc(sg)->fGlobalAttrDecls)->get(name));
}

$XSAttributeDeclaration* XSModelImpl::getAttributeDeclaration($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getGlobalAttributeDecl(name, loc);
}

$XSElementDeclaration* XSModelImpl::getElementDeclaration($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSElementDeclaration, $nc($nc(sg)->fGlobalElemDecls)->get(name));
}

$XSElementDeclaration* XSModelImpl::getElementDeclaration($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getGlobalElementDecl(name, loc);
}

$XSAttributeGroupDefinition* XSModelImpl::getAttributeGroup($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSAttributeGroupDefinition, $nc($nc(sg)->fGlobalAttrGrpDecls)->get(name));
}

$XSAttributeGroupDefinition* XSModelImpl::getAttributeGroup($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getGlobalAttributeGroupDecl(name, loc);
}

$XSModelGroupDefinition* XSModelImpl::getModelGroupDefinition($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSModelGroupDefinition, $nc($nc(sg)->fGlobalGroupDecls)->get(name));
}

$XSModelGroupDefinition* XSModelImpl::getModelGroupDefinition($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getGlobalGroupDecl(name, loc);
}

$XSIDCDefinition* XSModelImpl::getIDCDefinition($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSIDCDefinition, $nc($nc(sg)->fGlobalIDConstraintDecls)->get(name));
}

$XSIDCDefinition* XSModelImpl::getIDCDefinition($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getIDConstraintDecl(name, loc);
}

$XSNotationDeclaration* XSModelImpl::getNotationDeclaration($String* name, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $cast($XSNotationDeclaration, $nc($nc(sg)->fGlobalNotationDecls)->get(name));
}

$XSNotationDeclaration* XSModelImpl::getNotationDeclaration($String* name, $String* namespace$, $String* loc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $cast($SchemaGrammar, $nc(this->fGrammarMap)->get($(null2EmptyString(namespace$)))));
	if (sg == nullptr) {
		return nullptr;
	}
	return $nc(sg)->getGlobalNotationDecl(name, loc);
}

$XSObjectList* XSModelImpl::getAnnotations() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fAnnotations != nullptr) {
			return this->fAnnotations;
		}
		int32_t totalAnnotations = 0;
		for (int32_t i = 0; i < this->fGrammarCount; ++i) {
			totalAnnotations += $nc($nc(this->fGrammarList)->get(i))->fNumAnnotations;
		}
		if (totalAnnotations == 0) {
			$init($XSObjectListImpl);
			$set(this, fAnnotations, $XSObjectListImpl::EMPTY_LIST);
			return this->fAnnotations;
		}
		$var($XSAnnotationImplArray, annotations, $new($XSAnnotationImplArray, totalAnnotations));
		int32_t currPos = 0;
		for (int32_t i = 0; i < this->fGrammarCount; ++i) {
			$var($SchemaGrammar, currGrammar, $nc(this->fGrammarList)->get(i));
			if ($nc(currGrammar)->fNumAnnotations > 0) {
				$System::arraycopy(currGrammar->fAnnotations, 0, annotations, currPos, currGrammar->fNumAnnotations);
				currPos += currGrammar->fNumAnnotations;
			}
		}
		$set(this, fAnnotations, $new($XSObjectListImpl, $fcast($XSObjectArray, annotations), annotations->length));
		return this->fAnnotations;
	}
}

$String* XSModelImpl::null2EmptyString($String* str) {
	$init(XSModelImpl);
	$init($XMLSymbols);
	return str == nullptr ? $XMLSymbols::EMPTY_STRING : str;
}

bool XSModelImpl::hasIDConstraints() {
	return this->fHasIDC;
}

$XSObjectList* XSModelImpl::getSubstitutionGroup($XSElementDeclaration* head) {
	return $cast($XSObjectList, $nc(this->fSubGroupMap)->get(head));
}

int32_t XSModelImpl::getLength() {
	return this->fGrammarCount;
}

$XSNamespaceItem* XSModelImpl::item(int32_t index) {
	if (index < 0 || index >= this->fGrammarCount) {
		return nullptr;
	}
	return $nc(this->fGrammarList)->get(index);
}

$Object* XSModelImpl::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fGrammarCount) {
		return $of($nc(this->fGrammarList)->get(index));
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

int32_t XSModelImpl::size() {
	return getLength();
}

$Iterator* XSModelImpl::iterator() {
	return listIterator0(0);
}

$ListIterator* XSModelImpl::listIterator() {
	return listIterator0(0);
}

$ListIterator* XSModelImpl::listIterator(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= 0 && index < this->fGrammarCount) {
		return listIterator0(index);
	}
	$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index)}));
}

$ListIterator* XSModelImpl::listIterator0(int32_t index) {
	return $new($XSModelImpl$XSNamespaceItemListIterator, this, index);
}

$ObjectArray* XSModelImpl::toArray() {
	$var($ObjectArray, a, $new($ObjectArray, this->fGrammarCount));
	toArray0(a);
	return a;
}

$ObjectArray* XSModelImpl::toArray($ObjectArray* a$renamed) {
	$var($ObjectArray, a, a$renamed);
	if ($nc(a)->length < this->fGrammarCount) {
		$Class* arrayClass = $of(a)->getClass();
		$Class* componentType = $nc(arrayClass)->getComponentType();
		$assign(a, $cast($ObjectArray, $1Array::newInstance(componentType, this->fGrammarCount)));
	}
	toArray0(a);
	if ($nc(a)->length > this->fGrammarCount) {
		a->set(this->fGrammarCount, nullptr);
	}
	return a;
}

void XSModelImpl::toArray0($ObjectArray* a) {
	if (this->fGrammarCount > 0) {
		$System::arraycopy(this->fGrammarList, 0, a, 0, this->fGrammarCount);
	}
}

void clinit$XSModelImpl($Class* class$) {
	$assignStatic(XSModelImpl::GLOBAL_COMP, $new($booleans, {
		false,
		true,
		true,
		true,
		false,
		true,
		true,
		false,
		false,
		false,
		true,
		true,
		false,
		false,
		false,
		true,
		true
	}));
}

XSModelImpl::XSModelImpl() {
}

$Class* XSModelImpl::load$($String* name, bool initialize) {
	$loadClass(XSModelImpl, name, initialize, &_XSModelImpl_ClassInfo_, clinit$XSModelImpl, allocate$XSModelImpl);
	return class$;
}

$Class* XSModelImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com