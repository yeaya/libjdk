#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar$ChildrenList.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMAny.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMBinOp.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMUniOp.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/DFAContentModel.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/MixedContentModel.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/SimpleContentModel.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CHUNK_MASK
#undef CHUNK_SHIFT
#undef CHUNK_SIZE
#undef CONTENTSPECNODE_ANY
#undef CONTENTSPECNODE_ANY_LOCAL
#undef CONTENTSPECNODE_ANY_OTHER
#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_LEAF
#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_SEQ
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE
#undef DEBUG
#undef DEFAULT_TYPE_FIXED
#undef DEFAULT_TYPE_IMPLIED
#undef DEFAULT_TYPE_REQUIRED
#undef INITIAL_CHUNK_COUNT
#undef LIST_FLAG
#undef LIST_MASK
#undef OCCURS_ONE_OR_MORE
#undef OCCURS_ZERO_OR_MORE
#undef OCCURS_ZERO_OR_ONE
#undef SEPARATOR_CHOICE
#undef SEPARATOR_SEQUENCE
#undef TOP_LEVEL_SCOPE
#undef TYPE_ANY
#undef TYPE_CDATA
#undef TYPE_CHILDREN
#undef TYPE_EMPTY
#undef TYPE_ENTITY
#undef TYPE_ENUMERATION
#undef TYPE_ID
#undef TYPE_IDREF
#undef TYPE_MIXED
#undef TYPE_NMTOKEN
#undef TYPE_NOTATION
#undef TYPE_SIMPLE

using $ContentModelValidatorArray = $Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator>;
using $DatatypeValidatorArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator>;
using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $byteArray2 = $Array<int8_t, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $ContentModelValidatorArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator, 2>;
using $DatatypeValidatorArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator, 2>;
using $QNameArray2 = $Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $StringArray3 = $Array<::java::lang::String, 3>;
using $DTDGrammar$ChildrenList = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar$ChildrenList;
using $XMLAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl;
using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $XMLElementDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl;
using $XMLEntityDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl;
using $XMLNotationDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLNotationDecl;
using $XMLSimpleType = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType;
using $CMAny = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMAny;
using $CMBinOp = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMBinOp;
using $CMLeaf = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMUniOp = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMUniOp;
using $ContentModelValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator;
using $DFAContentModel = ::com::sun::org::apache::xerces::internal::impl::dtd::models::DFAContentModel;
using $MixedContentModel = ::com::sun::org::apache::xerces::internal::impl::dtd::models::MixedContentModel;
using $SimpleContentModel = ::com::sun::org::apache::xerces::internal::impl::dtd::models::SimpleContentModel;
using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $1XMLDTDDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _DTDGrammar_FieldInfo_[] = {
	{"TOP_LEVEL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDGrammar, TOP_LEVEL_SCOPE)},
	{"CHUNK_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, CHUNK_SHIFT)},
	{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, CHUNK_MASK)},
	{"INITIAL_CHUNK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, INITIAL_CHUNK_COUNT)},
	{"LIST_FLAG", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, LIST_FLAG)},
	{"LIST_MASK", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, LIST_MASK)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, DEBUG)},
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PROTECTED, $field(DTDGrammar, fDTDSource)},
	{"fDTDContentModelSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PROTECTED, $field(DTDGrammar, fDTDContentModelSource)},
	{"fCurrentElementIndex", "I", nullptr, $PROTECTED, $field(DTDGrammar, fCurrentElementIndex)},
	{"fCurrentAttributeIndex", "I", nullptr, $PROTECTED, $field(DTDGrammar, fCurrentAttributeIndex)},
	{"fReadingExternalDTD", "Z", nullptr, $PROTECTED, $field(DTDGrammar, fReadingExternalDTD)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(DTDGrammar, fSymbolTable)},
	{"fGrammarDescription", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription;", nullptr, $PROTECTED, $field(DTDGrammar, fGrammarDescription)},
	{"fElementDeclCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclCount)},
	{"fElementDeclName", "[[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclName)},
	{"fElementDeclType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclType)},
	{"fElementDeclContentSpecIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclContentSpecIndex)},
	{"fElementDeclContentModelValidator", "[[Lcom/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator;", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclContentModelValidator)},
	{"fElementDeclFirstAttributeDeclIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclFirstAttributeDeclIndex)},
	{"fElementDeclLastAttributeDeclIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclLastAttributeDeclIndex)},
	{"fAttributeDeclCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclCount)},
	{"fAttributeDeclName", "[[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclName)},
	{"fIsImmutable", "Z", nullptr, $PRIVATE, $field(DTDGrammar, fIsImmutable)},
	{"fAttributeDeclType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclType)},
	{"fAttributeDeclEnumeration", "[[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclEnumeration)},
	{"fAttributeDeclDefaultType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclDefaultType)},
	{"fAttributeDeclDatatypeValidator", "[[Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclDatatypeValidator)},
	{"fAttributeDeclDefaultValue", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclDefaultValue)},
	{"fAttributeDeclNonNormalizedDefaultValue", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclNonNormalizedDefaultValue)},
	{"fAttributeDeclNextAttributeDeclIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclNextAttributeDeclIndex)},
	{"fContentSpecCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fContentSpecCount)},
	{"fContentSpecType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fContentSpecType)},
	{"fContentSpecValue", "[[Ljava/lang/Object;", nullptr, $PRIVATE, $field(DTDGrammar, fContentSpecValue)},
	{"fContentSpecOtherValue", "[[Ljava/lang/Object;", nullptr, $PRIVATE, $field(DTDGrammar, fContentSpecOtherValue)},
	{"fEntityCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fEntityCount)},
	{"fEntityName", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fEntityName)},
	{"fEntityValue", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fEntityValue)},
	{"fEntityPublicId", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fEntityPublicId)},
	{"fEntitySystemId", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fEntitySystemId)},
	{"fEntityBaseSystemId", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fEntityBaseSystemId)},
	{"fEntityNotation", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fEntityNotation)},
	{"fEntityIsPE", "[[B", nullptr, $PRIVATE, $field(DTDGrammar, fEntityIsPE)},
	{"fEntityInExternal", "[[B", nullptr, $PRIVATE, $field(DTDGrammar, fEntityInExternal)},
	{"fNotationCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fNotationCount)},
	{"fNotationName", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fNotationName)},
	{"fNotationPublicId", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fNotationPublicId)},
	{"fNotationSystemId", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fNotationSystemId)},
	{"fNotationBaseSystemId", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fNotationBaseSystemId)},
	{"fElementIndexMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(DTDGrammar, fElementIndexMap)},
	{"fEntityIndexMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(DTDGrammar, fEntityIndexMap)},
	{"fNotationIndexMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(DTDGrammar, fNotationIndexMap)},
	{"fMixed", "Z", nullptr, $PRIVATE, $field(DTDGrammar, fMixed)},
	{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DTDGrammar, fQName)},
	{"fQName2", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DTDGrammar, fQName2)},
	{"fAttributeDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl;", nullptr, $PROTECTED | $FINAL, $field(DTDGrammar, fAttributeDecl)},
	{"fLeafCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fLeafCount)},
	{"fEpsilonIndex", "I", nullptr, $PRIVATE, $field(DTDGrammar, fEpsilonIndex)},
	{"fElementDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;", nullptr, $PRIVATE, $field(DTDGrammar, fElementDecl)},
	{"fEntityDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl;", nullptr, $PRIVATE, $field(DTDGrammar, fEntityDecl)},
	{"fSimpleType", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLSimpleType;", nullptr, $PRIVATE, $field(DTDGrammar, fSimpleType)},
	{"fContentSpec", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;", nullptr, $PRIVATE, $field(DTDGrammar, fContentSpec)},
	{"fElementDeclTab", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;>;", 0, $field(DTDGrammar, fElementDeclTab)},
	{"fOpStack", "[S", nullptr, $PRIVATE, $field(DTDGrammar, fOpStack)},
	{"fNodeIndexStack", "[I", nullptr, $PRIVATE, $field(DTDGrammar, fNodeIndexStack)},
	{"fPrevNodeIndexStack", "[I", nullptr, $PRIVATE, $field(DTDGrammar, fPrevNodeIndexStack)},
	{"fDepth", "I", nullptr, $PRIVATE, $field(DTDGrammar, fDepth)},
	{"fPEntityStack", "[Z", nullptr, $PRIVATE, $field(DTDGrammar, fPEntityStack)},
	{"fPEDepth", "I", nullptr, $PRIVATE, $field(DTDGrammar, fPEDepth)},
	{"fElementDeclIsExternal", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclIsExternal)},
	{"fAttributeDeclIsExternal", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclIsExternal)},
	{"valueIndex", "I", nullptr, 0, $field(DTDGrammar, valueIndex)},
	{"prevNodeIndex", "I", nullptr, 0, $field(DTDGrammar, prevNodeIndex)},
	{"nodeIndex", "I", nullptr, 0, $field(DTDGrammar, nodeIndex)},
	{}
};

$MethodInfo _DTDGrammar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription;)V", nullptr, $PUBLIC, $method(DTDGrammar, init$, void, $SymbolTable*, $XMLDTDDescription*)},
	{"addContentSpecNode", "(SLjava/lang/String;)I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, addContentSpecNode, int32_t, int16_t, $String*)},
	{"addContentSpecNode", "(SII)I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, addContentSpecNode, int32_t, int16_t, int32_t, int32_t)},
	{"addContentSpecToElement", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, addContentSpecToElement, void, $XMLElementDecl*)},
	{"addUniqueLeafNode", "(Ljava/lang/String;)I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, addUniqueLeafNode, int32_t, $String*)},
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, any, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"appendContentSpec", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;Ljava/lang/StringBuffer;ZI)V", nullptr, $PRIVATE, $method(DTDGrammar, appendContentSpec, void, $XMLContentSpec*, $StringBuffer*, bool, int32_t)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"buildSyntaxTree", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE | $FINAL, $method(DTDGrammar, buildSyntaxTree, $CMNode*, int32_t, $XMLContentSpec*)},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"contentSpecTree", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar$ChildrenList;)V", nullptr, $PRIVATE, $method(DTDGrammar, contentSpecTree, void, int32_t, $XMLContentSpec*, $DTDGrammar$ChildrenList*)},
	{"createAttributeDecl", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createAttributeDecl, int32_t)},
	{"createChildModel", "(I)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(DTDGrammar, createChildModel, $ContentModelValidator*, int32_t)},
	{"createContentSpec", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createContentSpec, int32_t)},
	{"createElementDecl", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createElementDecl, int32_t)},
	{"createEntityDecl", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createEntityDecl, int32_t)},
	{"createNotationDecl", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createNotationDecl, int32_t)},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, element, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, empty, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endContentModel, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ensureAttributeDeclCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureAttributeDeclCapacity, void, int32_t)},
	{"ensureContentSpecCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureContentSpecCapacity, void, int32_t)},
	{"ensureElementDeclCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureElementDeclCapacity, void, int32_t)},
	{"ensureEntityDeclCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureEntityDeclCapacity, void, int32_t)},
	{"ensureNotationDeclCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureNotationDeclCapacity, void, int32_t)},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getAttributeDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getAttributeDecl, bool, int32_t, $XMLAttributeDecl*)},
	{"getAttributeDeclIndex", "(ILjava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getAttributeDeclIndex, int32_t, int32_t, $String*)},
	{"getAttributeDeclIsExternal", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getAttributeDeclIsExternal, bool, int32_t)},
	{"getContentSpec", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getContentSpec, bool, int32_t, $XMLContentSpec*)},
	{"getContentSpecAsString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getContentSpecAsString, $String*, int32_t)},
	{"getContentSpecIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getContentSpecIndex, int32_t, int32_t)},
	{"getContentSpecType", "(I)S", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getContentSpecType, int16_t, int32_t)},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getDTDContentModelSource, $XMLDTDContentModelSource*)},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getDTDSource, $XMLDTDSource*)},
	{"getElementContentModelValidator", "(I)Lcom/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator;", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, getElementContentModelValidator, $ContentModelValidator*, int32_t)},
	{"getElementDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDecl, bool, int32_t, $XMLElementDecl*)},
	{"getElementDeclIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDeclIndex, int32_t, $String*)},
	{"getElementDeclIndex", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDeclIndex, int32_t, $QName*)},
	{"getElementDeclIsExternal", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDeclIsExternal, bool, int32_t)},
	{"getElementDeclName", "(I)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, 0, $virtualMethod(DTDGrammar, getElementDeclName, $QName*, int32_t)},
	{"getEntityDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getEntityDecl, bool, int32_t, $XMLEntityDecl*)},
	{"getEntityDeclIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getEntityDeclIndex, int32_t, $String*)},
	{"getFirstAttributeDeclIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getFirstAttributeDeclIndex, int32_t, int32_t)},
	{"getFirstElementDeclIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getFirstElementDeclIndex, int32_t)},
	{"getGrammarDescription", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getGrammarDescription, $XMLGrammarDescription*)},
	{"getNextAttributeDeclIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getNextAttributeDeclIndex, int32_t, int32_t)},
	{"getNextElementDeclIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getNextElementDeclIndex, int32_t, int32_t)},
	{"getNotationDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLNotationDecl;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getNotationDecl, bool, int32_t, $XMLNotationDecl*)},
	{"getNotationDeclIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getNotationDeclIndex, int32_t, $String*)},
	{"getSymbolTable", "()Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getSymbolTable, $SymbolTable*)},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"initializeContentModelStack", "()V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, initializeContentModelStack, void)},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isCDATAAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, isCDATAAttribute, bool, $QName*, $QName*)},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, isEntityUnparsed, bool, $String*)},
	{"isImmutable", "()Z", nullptr, 0, $virtualMethod(DTDGrammar, isImmutable, bool)},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, isNamespaceAware, bool)},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, occurrence, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, pcdata, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"printAttribute", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, printAttribute, void, int32_t)},
	{"printAttributes", "(I)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, printAttributes, void, int32_t)},
	{"printElements", "()V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, printElements, void)},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"putElementNameMapping", "(Lcom/sun/org/apache/xerces/internal/xni/QName;II)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, putElementNameMapping, void, $QName*, int32_t, int32_t)},
	{"resize", "([[BI)[[B", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $byteArray2*, $byteArray2*, int32_t)},
	{"resize", "([[SI)[[S", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $shortArray2*, $shortArray2*, int32_t)},
	{"resize", "([[II)[[I", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $intArray2*, $intArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;I)[[Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $DatatypeValidatorArray2*, $DatatypeValidatorArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator;I)[[Lcom/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $ContentModelValidatorArray2*, $ContentModelValidatorArray2*, int32_t)},
	{"resize", "([[Ljava/lang/Object;I)[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $ObjectArray2*, $ObjectArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/xni/QName;I)[[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $QNameArray2*, $QNameArray2*, int32_t)},
	{"resize", "([[Ljava/lang/String;I)[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $StringArray2*, $StringArray2*, int32_t)},
	{"resize", "([[[Ljava/lang/String;I)[[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $StringArray3*, $StringArray3*, int32_t)},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, separator, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setAttributeDecl", "(IILcom/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setAttributeDecl, void, int32_t, int32_t, $XMLAttributeDecl*)},
	{"setContentSpec", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setContentSpec, void, int32_t, $XMLContentSpec*)},
	{"setContentSpecIndex", "(II)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setContentSpecIndex, void, int32_t, int32_t)},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, setDTDContentModelSource, void, $XMLDTDContentModelSource*)},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, setDTDSource, void, $XMLDTDSource*)},
	{"setElementDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setElementDecl, void, int32_t, $XMLElementDecl*)},
	{"setEntityDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setEntityDecl, void, int32_t, $XMLEntityDecl*)},
	{"setFirstAttributeDeclIndex", "(II)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setFirstAttributeDeclIndex, void, int32_t, int32_t)},
	{"setNotationDecl", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/XMLNotationDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setNotationDecl, void, int32_t, $XMLNotationDecl*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startContentModel, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _DTDGrammar_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList", "com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar", "ChildrenList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTDGrammar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler,com.sun.org.apache.xerces.internal.impl.validation.EntityState,com.sun.org.apache.xerces.internal.xni.grammars.Grammar",
	_DTDGrammar_FieldInfo_,
	_DTDGrammar_MethodInfo_,
	nullptr,
	nullptr,
	_DTDGrammar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList"
};

$Object* allocate$DTDGrammar($Class* clazz) {
	return $of($alloc(DTDGrammar));
}

int32_t DTDGrammar::hashCode() {
	 return this->$XMLDTDHandler::hashCode();
}

bool DTDGrammar::equals(Object$* arg0) {
	 return this->$XMLDTDHandler::equals(arg0);
}

$Object* DTDGrammar::clone() {
	 return this->$XMLDTDHandler::clone();
}

$String* DTDGrammar::toString() {
	 return this->$XMLDTDHandler::toString();
}

void DTDGrammar::finalize() {
	this->$XMLDTDHandler::finalize();
}

void DTDGrammar::init$($SymbolTable* symbolTable, $XMLDTDDescription* desc) {
	$set(this, fDTDSource, nullptr);
	$set(this, fDTDContentModelSource, nullptr);
	this->fReadingExternalDTD = false;
	$set(this, fGrammarDescription, nullptr);
	this->fElementDeclCount = 0;
	$set(this, fElementDeclName, $new($QNameArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclContentSpecIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclContentModelValidator, $new($ContentModelValidatorArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclFirstAttributeDeclIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclLastAttributeDeclIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->fAttributeDeclCount = 0;
	$set(this, fAttributeDeclName, $new($QNameArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->fIsImmutable = false;
	$set(this, fAttributeDeclType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclEnumeration, $new($StringArray3, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclDefaultType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclDatatypeValidator, $new($DatatypeValidatorArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclDefaultValue, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclNonNormalizedDefaultValue, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclNextAttributeDeclIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->fContentSpecCount = 0;
	$set(this, fContentSpecType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fContentSpecValue, $new($ObjectArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fContentSpecOtherValue, $new($ObjectArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->fEntityCount = 0;
	$set(this, fEntityName, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntityValue, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntityPublicId, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntitySystemId, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntityBaseSystemId, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntityNotation, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntityIsPE, $new($byteArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fEntityInExternal, $new($byteArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->fNotationCount = 0;
	$set(this, fNotationName, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fNotationPublicId, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fNotationSystemId, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fNotationBaseSystemId, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementIndexMap, $new($HashMap));
	$set(this, fEntityIndexMap, $new($HashMap));
	$set(this, fNotationIndexMap, $new($HashMap));
	$set(this, fQName, $new($QName));
	$set(this, fQName2, $new($QName));
	$set(this, fAttributeDecl, $new($XMLAttributeDecl));
	this->fLeafCount = 0;
	this->fEpsilonIndex = -1;
	$set(this, fElementDecl, $new($XMLElementDecl));
	$set(this, fEntityDecl, $new($XMLEntityDecl));
	$set(this, fSimpleType, $new($XMLSimpleType));
	$set(this, fContentSpec, $new($XMLContentSpec));
	$set(this, fElementDeclTab, $new($HashMap));
	$set(this, fOpStack, nullptr);
	$set(this, fNodeIndexStack, nullptr);
	$set(this, fPrevNodeIndexStack, nullptr);
	this->fDepth = 0;
	$set(this, fPEntityStack, $new($booleans, 4));
	this->fPEDepth = 0;
	$set(this, fElementDeclIsExternal, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclIsExternal, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->valueIndex = -1;
	this->prevNodeIndex = -1;
	this->nodeIndex = -1;
	$set(this, fSymbolTable, symbolTable);
	$set(this, fGrammarDescription, desc);
}

$XMLGrammarDescription* DTDGrammar::getGrammarDescription() {
	return this->fGrammarDescription;
}

bool DTDGrammar::getElementDeclIsExternal(int32_t elementDeclIndex) {
	if (elementDeclIndex < 0) {
		return false;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return ($nc($nc(this->fElementDeclIsExternal)->get(chunk))->get(index) != 0);
}

bool DTDGrammar::getAttributeDeclIsExternal(int32_t attributeDeclIndex) {
	if (attributeDeclIndex < 0) {
		return false;
	}
	int32_t chunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return ($nc($nc(this->fAttributeDeclIsExternal)->get(chunk))->get(index) != 0);
}

int32_t DTDGrammar::getAttributeDeclIndex(int32_t elementDeclIndex, $String* attributeDeclName) {
	if (elementDeclIndex == -1) {
		return -1;
	}
	int32_t attDefIndex = getFirstAttributeDeclIndex(elementDeclIndex);
	while (attDefIndex != -1) {
		getAttributeDecl(attDefIndex, this->fAttributeDecl);
		if ($nc($nc(this->fAttributeDecl)->name)->rawname == attributeDeclName || $nc(attributeDeclName)->equals($nc($nc(this->fAttributeDecl)->name)->rawname)) {
			return attDefIndex;
		}
		attDefIndex = getNextAttributeDeclIndex(attDefIndex);
	}
	return -1;
}

void DTDGrammar::startDTD($XMLLocator* locator, $Augmentations* augs) {
	$set(this, fOpStack, nullptr);
	$set(this, fNodeIndexStack, nullptr);
	$set(this, fPrevNodeIndexStack, nullptr);
}

void DTDGrammar::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	if (this->fPEDepth == $nc(this->fPEntityStack)->length) {
		$var($booleans, entityarray, $new($booleans, $nc(this->fPEntityStack)->length * 2));
		$System::arraycopy(this->fPEntityStack, 0, entityarray, 0, $nc(this->fPEntityStack)->length);
		$set(this, fPEntityStack, entityarray);
	}
	$nc(this->fPEntityStack)->set(this->fPEDepth, this->fReadingExternalDTD);
	++this->fPEDepth;
}

void DTDGrammar::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augs) {
	this->fReadingExternalDTD = true;
}

void DTDGrammar::endParameterEntity($String* name, $Augmentations* augs) {
	if (this->fPEDepth > 0) {
		--this->fPEDepth;
		this->fReadingExternalDTD = $nc(this->fPEntityStack)->get(this->fPEDepth);
	}
}

void DTDGrammar::endExternalSubset($Augmentations* augs) {
	this->fReadingExternalDTD = false;
}

void DTDGrammar::elementDecl($String* name, $String* contentModel, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLElementDecl, tmpElementDecl, $cast($XMLElementDecl, $nc(this->fElementDeclTab)->get(name)));
	if (tmpElementDecl != nullptr) {
		if (tmpElementDecl->type == -1) {
			this->fCurrentElementIndex = getElementDeclIndex(name);
		} else {
			return;
		}
	} else {
		this->fCurrentElementIndex = createElementDecl();
	}
	$var($XMLElementDecl, elementDecl, $new($XMLElementDecl));
	$nc(this->fQName)->setValues(nullptr, name, name, nullptr);
	$nc(elementDecl->name)->setValues(this->fQName);
	$set(elementDecl, contentModelValidator, nullptr);
	elementDecl->scope = -1;
	if ($nc(contentModel)->equals("EMPTY"_s)) {
		elementDecl->type = $XMLElementDecl::TYPE_EMPTY;
	} else if (contentModel->equals("ANY"_s)) {
		elementDecl->type = $XMLElementDecl::TYPE_ANY;
	} else if (contentModel->startsWith("("_s)) {
		if (contentModel->indexOf("#PCDATA"_s) > 0) {
			elementDecl->type = $XMLElementDecl::TYPE_MIXED;
		} else {
			elementDecl->type = $XMLElementDecl::TYPE_CHILDREN;
		}
	}
	$nc(this->fElementDeclTab)->put(name, elementDecl);
	$set(this, fElementDecl, elementDecl);
	addContentSpecToElement(elementDecl);
	setElementDecl(this->fCurrentElementIndex, this->fElementDecl);
	int32_t chunk = $sr(this->fCurrentElementIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fCurrentElementIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureElementDeclCapacity(chunk);
	$nc($nc(this->fElementDeclIsExternal)->get(chunk))->set(index, (this->fReadingExternalDTD || this->fPEDepth > 0) ? 1 : 0);
}

void DTDGrammar::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fElementDeclTab)->containsKey(elementName)) {
	} else {
		this->fCurrentElementIndex = createElementDecl();
		$var($XMLElementDecl, elementDecl, $new($XMLElementDecl));
		$nc(elementDecl->name)->setValues(nullptr, elementName, elementName, nullptr);
		elementDecl->scope = -1;
		$nc(this->fElementDeclTab)->put(elementName, elementDecl);
		setElementDecl(this->fCurrentElementIndex, elementDecl);
	}
	int32_t elementIndex = getElementDeclIndex(elementName);
	if (getAttributeDeclIndex(elementIndex, attributeName) != -1) {
		return;
	}
	this->fCurrentAttributeIndex = createAttributeDecl();
	$nc(this->fSimpleType)->clear();
	if (defaultType != nullptr) {
		if (defaultType->equals("#FIXED"_s)) {
			$nc(this->fSimpleType)->defaultType = $XMLSimpleType::DEFAULT_TYPE_FIXED;
		} else if (defaultType->equals("#IMPLIED"_s)) {
			$nc(this->fSimpleType)->defaultType = $XMLSimpleType::DEFAULT_TYPE_IMPLIED;
		} else if (defaultType->equals("#REQUIRED"_s)) {
			$nc(this->fSimpleType)->defaultType = $XMLSimpleType::DEFAULT_TYPE_REQUIRED;
		}
	}
	$set($nc(this->fSimpleType), defaultValue, defaultValue != nullptr ? $nc(defaultValue)->toString() : ($String*)nullptr);
	$set($nc(this->fSimpleType), nonNormalizedDefaultValue, nonNormalizedDefaultValue != nullptr ? $nc(nonNormalizedDefaultValue)->toString() : ($String*)nullptr);
	$set($nc(this->fSimpleType), enumeration, enumeration);
	if ($nc(type)->equals("CDATA"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_CDATA;
	} else if (type->equals("ID"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ID;
	} else if (type->startsWith("IDREF"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_IDREF;
		if (type->indexOf("S"_s) > 0) {
			$nc(this->fSimpleType)->list = true;
		}
	} else if (type->equals("ENTITIES"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ENTITY;
		$nc(this->fSimpleType)->list = true;
	} else if (type->equals("ENTITY"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ENTITY;
	} else if (type->equals("NMTOKENS"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_NMTOKEN;
		$nc(this->fSimpleType)->list = true;
	} else if (type->equals("NMTOKEN"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_NMTOKEN;
	} else if (type->startsWith("NOTATION"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_NOTATION;
	} else if (type->startsWith("ENUMERATION"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ENUMERATION;
	} else {
		$nc($System::err)->println($$str({"!!! unknown attribute type "_s, type}));
	}
	$nc(this->fQName)->setValues(nullptr, attributeName, attributeName, nullptr);
	$nc(this->fAttributeDecl)->setValues(this->fQName, this->fSimpleType, false);
	setAttributeDecl(elementIndex, this->fCurrentAttributeIndex, this->fAttributeDecl);
	int32_t chunk = $sr(this->fCurrentAttributeIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fCurrentAttributeIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureAttributeDeclCapacity(chunk);
	$nc($nc(this->fAttributeDeclIsExternal)->get(chunk))->set(index, (this->fReadingExternalDTD || this->fPEDepth > 0) ? 1 : 0);
}

void DTDGrammar::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	int32_t entityIndex = getEntityDeclIndex(name);
	if (entityIndex == -1) {
		entityIndex = createEntityDecl();
		bool isPE = $nc(name)->startsWith("%"_s);
		bool inExternal = (this->fReadingExternalDTD || this->fPEDepth > 0);
		$var($XMLEntityDecl, entityDecl, $new($XMLEntityDecl));
		entityDecl->setValues(name, nullptr, nullptr, nullptr, nullptr, $($nc(text)->toString()), isPE, inExternal);
		setEntityDecl(entityIndex, entityDecl);
	}
}

void DTDGrammar::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	int32_t entityIndex = getEntityDeclIndex(name);
	if (entityIndex == -1) {
		entityIndex = createEntityDecl();
		bool isPE = $nc(name)->startsWith("%"_s);
		bool inExternal = (this->fReadingExternalDTD || this->fPEDepth > 0);
		$var($XMLEntityDecl, entityDecl, $new($XMLEntityDecl));
		$var($String, var$0, name);
		$var($String, var$1, $nc(identifier)->getPublicId());
		$var($String, var$2, identifier->getLiteralSystemId());
		entityDecl->setValues(var$0, var$1, var$2, $(identifier->getBaseSystemId()), nullptr, nullptr, isPE, inExternal);
		setEntityDecl(entityIndex, entityDecl);
	}
}

void DTDGrammar::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLEntityDecl, entityDecl, $new($XMLEntityDecl));
	bool isPE = $nc(name)->startsWith("%"_s);
	bool inExternal = (this->fReadingExternalDTD || this->fPEDepth > 0);
	$var($String, var$0, name);
	$var($String, var$1, $nc(identifier)->getPublicId());
	$var($String, var$2, identifier->getLiteralSystemId());
	entityDecl->setValues(var$0, var$1, var$2, $(identifier->getBaseSystemId()), notation, nullptr, isPE, inExternal);
	int32_t entityIndex = getEntityDeclIndex(name);
	if (entityIndex == -1) {
		entityIndex = createEntityDecl();
		setEntityDecl(entityIndex, entityDecl);
	}
}

void DTDGrammar::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLNotationDecl, notationDecl, $new($XMLNotationDecl));
	$var($String, var$0, name);
	$var($String, var$1, $nc(identifier)->getPublicId());
	$var($String, var$2, identifier->getLiteralSystemId());
	notationDecl->setValues(var$0, var$1, var$2, $(identifier->getBaseSystemId()));
	int32_t notationIndex = getNotationDeclIndex(name);
	if (notationIndex == -1) {
		notationIndex = createNotationDecl();
		setNotationDecl(notationIndex, notationDecl);
	}
}

void DTDGrammar::endDTD($Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	this->fIsImmutable = true;
	if ($nc(this->fGrammarDescription)->getRootName() == nullptr) {
		int32_t chunk = 0;
		int32_t index = 0;
		$var($String, currName, nullptr);
		int32_t size = this->fElementDeclCount;
		$var($List, elements, $new($ArrayList, size));
		for (int32_t i = 0; i < size; ++i) {
			chunk = $sr(i, DTDGrammar::CHUNK_SHIFT);
			index = (int32_t)(i & (uint32_t)DTDGrammar::CHUNK_MASK);
			$assign(currName, $nc($nc($nc(this->fElementDeclName)->get(chunk))->get(index))->rawname);
			elements->add(currName);
		}
		$nc(this->fGrammarDescription)->setPossibleRoots(elements);
	}
}

void DTDGrammar::setDTDSource($XMLDTDSource* source) {
	$set(this, fDTDSource, source);
}

$XMLDTDSource* DTDGrammar::getDTDSource() {
	return this->fDTDSource;
}

void DTDGrammar::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void DTDGrammar::comment($XMLString* text, $Augmentations* augs) {
}

void DTDGrammar::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
}

void DTDGrammar::startAttlist($String* elementName, $Augmentations* augs) {
}

void DTDGrammar::endAttlist($Augmentations* augs) {
}

void DTDGrammar::startConditional(int16_t type, $Augmentations* augs) {
}

void DTDGrammar::ignoredCharacters($XMLString* text, $Augmentations* augs) {
}

void DTDGrammar::endConditional($Augmentations* augs) {
}

void DTDGrammar::setDTDContentModelSource($XMLDTDContentModelSource* source) {
	$set(this, fDTDContentModelSource, source);
}

$XMLDTDContentModelSource* DTDGrammar::getDTDContentModelSource() {
	return this->fDTDContentModelSource;
}

void DTDGrammar::startContentModel($String* elementName, $Augmentations* augs) {
	$var($XMLElementDecl, elementDecl, $cast($XMLElementDecl, $nc(this->fElementDeclTab)->get(elementName)));
	if (elementDecl != nullptr) {
		$set(this, fElementDecl, elementDecl);
	}
	this->fDepth = 0;
	initializeContentModelStack();
}

void DTDGrammar::startGroup($Augmentations* augs) {
	++this->fDepth;
	initializeContentModelStack();
	this->fMixed = false;
}

void DTDGrammar::pcdata($Augmentations* augs) {
	this->fMixed = true;
}

void DTDGrammar::element($String* elementName, $Augmentations* augs) {
	if (this->fMixed) {
		if ($nc(this->fNodeIndexStack)->get(this->fDepth) == -1) {
			$nc(this->fNodeIndexStack)->set(this->fDepth, addUniqueLeafNode(elementName));
		} else {
			$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_CHOICE, $nc(this->fNodeIndexStack)->get(this->fDepth), addUniqueLeafNode(elementName)));
		}
	} else {
		$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_LEAF, elementName));
	}
}

void DTDGrammar::separator(int16_t separator, $Augmentations* augs) {
	if (!this->fMixed) {
		if ($nc(this->fOpStack)->get(this->fDepth) != $XMLContentSpec::CONTENTSPECNODE_SEQ && separator == $XMLDTDContentModelHandler::SEPARATOR_CHOICE) {
			if ($nc(this->fPrevNodeIndexStack)->get(this->fDepth) != -1) {
				$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($nc(this->fOpStack)->get(this->fDepth), $nc(this->fPrevNodeIndexStack)->get(this->fDepth), $nc(this->fNodeIndexStack)->get(this->fDepth)));
			}
			$nc(this->fPrevNodeIndexStack)->set(this->fDepth, $nc(this->fNodeIndexStack)->get(this->fDepth));
			$nc(this->fOpStack)->set(this->fDepth, $XMLContentSpec::CONTENTSPECNODE_CHOICE);
		} else if ($nc(this->fOpStack)->get(this->fDepth) != $XMLContentSpec::CONTENTSPECNODE_CHOICE && separator == $XMLDTDContentModelHandler::SEPARATOR_SEQUENCE) {
			if ($nc(this->fPrevNodeIndexStack)->get(this->fDepth) != -1) {
				$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($nc(this->fOpStack)->get(this->fDepth), $nc(this->fPrevNodeIndexStack)->get(this->fDepth), $nc(this->fNodeIndexStack)->get(this->fDepth)));
			}
			$nc(this->fPrevNodeIndexStack)->set(this->fDepth, $nc(this->fNodeIndexStack)->get(this->fDepth));
			$nc(this->fOpStack)->set(this->fDepth, $XMLContentSpec::CONTENTSPECNODE_SEQ);
		}
	}
}

void DTDGrammar::occurrence(int16_t occurrence, $Augmentations* augs) {
	if (!this->fMixed) {
		if (occurrence == $XMLDTDContentModelHandler::OCCURS_ZERO_OR_ONE) {
			$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE, $nc(this->fNodeIndexStack)->get(this->fDepth), -1));
		} else if (occurrence == $XMLDTDContentModelHandler::OCCURS_ZERO_OR_MORE) {
			$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE, $nc(this->fNodeIndexStack)->get(this->fDepth), -1));
		} else if (occurrence == $XMLDTDContentModelHandler::OCCURS_ONE_OR_MORE) {
			$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE, $nc(this->fNodeIndexStack)->get(this->fDepth), -1));
		}
	}
}

void DTDGrammar::endGroup($Augmentations* augs) {
	if (!this->fMixed) {
		if ($nc(this->fPrevNodeIndexStack)->get(this->fDepth) != -1) {
			$nc(this->fNodeIndexStack)->set(this->fDepth, addContentSpecNode($nc(this->fOpStack)->get(this->fDepth), $nc(this->fPrevNodeIndexStack)->get(this->fDepth), $nc(this->fNodeIndexStack)->get(this->fDepth)));
		}
		int32_t nodeIndex = $nc(this->fNodeIndexStack)->get(this->fDepth--);
		$nc(this->fNodeIndexStack)->set(this->fDepth, nodeIndex);
	}
}

void DTDGrammar::any($Augmentations* augs) {
}

void DTDGrammar::empty($Augmentations* augs) {
}

void DTDGrammar::endContentModel($Augmentations* augs) {
}

bool DTDGrammar::isNamespaceAware() {
	return false;
}

$SymbolTable* DTDGrammar::getSymbolTable() {
	return this->fSymbolTable;
}

int32_t DTDGrammar::getFirstElementDeclIndex() {
	return this->fElementDeclCount >= 0 ? 0 : -1;
}

int32_t DTDGrammar::getNextElementDeclIndex(int32_t elementDeclIndex) {
	return elementDeclIndex < this->fElementDeclCount - 1 ? elementDeclIndex + 1 : -1;
}

int32_t DTDGrammar::getElementDeclIndex($String* elementDeclName) {
	$var($Integer, mapping, $cast($Integer, $nc(this->fElementIndexMap)->get(elementDeclName)));
	if (mapping == nullptr) {
		$assign(mapping, $Integer::valueOf(-1));
	}
	return $nc(mapping)->intValue();
}

int32_t DTDGrammar::getElementDeclIndex($QName* elementDeclQName) {
	return getElementDeclIndex($nc(elementDeclQName)->rawname);
}

int16_t DTDGrammar::getContentSpecType(int32_t elementIndex) {
	if (elementIndex < 0 || elementIndex >= this->fElementDeclCount) {
		return (int16_t)-1;
	}
	int32_t chunk = $sr(elementIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	if ($nc($nc(this->fElementDeclType)->get(chunk))->get(index) == -1) {
		return (int16_t)-1;
	} else {
		return (int16_t)((int32_t)($nc($nc(this->fElementDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_MASK));
	}
}

bool DTDGrammar::getElementDecl(int32_t elementDeclIndex, $XMLElementDecl* elementDecl) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return false;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(elementDecl)->name)->setValues($nc($nc(this->fElementDeclName)->get(chunk))->get(index));
	if ($nc($nc(this->fElementDeclType)->get(chunk))->get(index) == -1) {
		elementDecl->type = (int16_t)-1;
		$nc(elementDecl->simpleType)->list = false;
	} else {
		elementDecl->type = (int16_t)((int32_t)($nc($nc(this->fElementDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_MASK));
		$nc(elementDecl->simpleType)->list = ((int32_t)($nc($nc(this->fElementDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_FLAG)) != 0;
	}
	if (elementDecl->type == $XMLElementDecl::TYPE_CHILDREN || elementDecl->type == $XMLElementDecl::TYPE_MIXED) {
		$set(elementDecl, contentModelValidator, getElementContentModelValidator(elementDeclIndex));
	}
	$set($nc(elementDecl->simpleType), datatypeValidator, nullptr);
	$nc(elementDecl->simpleType)->defaultType = (int16_t)-1;
	$set($nc(elementDecl->simpleType), defaultValue, nullptr);
	return true;
}

$QName* DTDGrammar::getElementDeclName(int32_t elementDeclIndex) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return nullptr;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return $nc($nc(this->fElementDeclName)->get(chunk))->get(index);
}

int32_t DTDGrammar::getFirstAttributeDeclIndex(int32_t elementDeclIndex) {
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return $nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(chunk))->get(index);
}

int32_t DTDGrammar::getNextAttributeDeclIndex(int32_t attributeDeclIndex) {
	int32_t chunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return $nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(chunk))->get(index);
}

bool DTDGrammar::getAttributeDecl(int32_t attributeDeclIndex, $XMLAttributeDecl* attributeDecl) {
	if (attributeDeclIndex < 0 || attributeDeclIndex >= this->fAttributeDeclCount) {
		return false;
	}
	int32_t chunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(attributeDecl)->name)->setValues($nc($nc(this->fAttributeDeclName)->get(chunk))->get(index));
	int16_t attributeType = 0;
	bool isList = false;
	if ($nc($nc(this->fAttributeDeclType)->get(chunk))->get(index) == -1) {
		attributeType = (int16_t)-1;
		isList = false;
	} else {
		attributeType = (int16_t)((int32_t)($nc($nc(this->fAttributeDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_MASK));
		isList = ((int32_t)($nc($nc(this->fAttributeDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_FLAG)) != 0;
	}
	$nc(attributeDecl->simpleType)->setValues(attributeType, $nc($nc($nc(this->fAttributeDeclName)->get(chunk))->get(index))->localpart, $nc($nc(this->fAttributeDeclEnumeration)->get(chunk))->get(index), isList, $nc($nc(this->fAttributeDeclDefaultType)->get(chunk))->get(index), $nc($nc(this->fAttributeDeclDefaultValue)->get(chunk))->get(index), $nc($nc(this->fAttributeDeclNonNormalizedDefaultValue)->get(chunk))->get(index), $nc($nc(this->fAttributeDeclDatatypeValidator)->get(chunk))->get(index));
	return true;
}

bool DTDGrammar::isCDATAAttribute($QName* elName, $QName* atName) {
	int32_t elDeclIdx = getElementDeclIndex(elName);
	if (getAttributeDecl(elDeclIdx, this->fAttributeDecl) && $nc($nc(this->fAttributeDecl)->simpleType)->type != $XMLSimpleType::TYPE_CDATA) {
		return false;
	}
	return true;
}

int32_t DTDGrammar::getEntityDeclIndex($String* entityDeclName) {
	if (entityDeclName == nullptr || $nc(this->fEntityIndexMap)->get(entityDeclName) == nullptr) {
		return -1;
	}
	return $nc(($cast($Integer, $($nc(this->fEntityIndexMap)->get(entityDeclName)))))->intValue();
}

bool DTDGrammar::getEntityDecl(int32_t entityDeclIndex, $XMLEntityDecl* entityDecl) {
	if (entityDeclIndex < 0 || entityDeclIndex >= this->fEntityCount) {
		return false;
	}
	int32_t chunk = $sr(entityDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(entityDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc(entityDecl)->setValues($nc($nc(this->fEntityName)->get(chunk))->get(index), $nc($nc(this->fEntityPublicId)->get(chunk))->get(index), $nc($nc(this->fEntitySystemId)->get(chunk))->get(index), $nc($nc(this->fEntityBaseSystemId)->get(chunk))->get(index), $nc($nc(this->fEntityNotation)->get(chunk))->get(index), $nc($nc(this->fEntityValue)->get(chunk))->get(index), $nc($nc(this->fEntityIsPE)->get(chunk))->get(index) == 0 ? false : true, $nc($nc(this->fEntityInExternal)->get(chunk))->get(index) == 0 ? false : true);
	return true;
}

int32_t DTDGrammar::getNotationDeclIndex($String* notationDeclName) {
	if (notationDeclName == nullptr || $nc(this->fNotationIndexMap)->get(notationDeclName) == nullptr) {
		return -1;
	}
	return $nc(($cast($Integer, $($nc(this->fNotationIndexMap)->get(notationDeclName)))))->intValue();
}

bool DTDGrammar::getNotationDecl(int32_t notationDeclIndex, $XMLNotationDecl* notationDecl) {
	if (notationDeclIndex < 0 || notationDeclIndex >= this->fNotationCount) {
		return false;
	}
	int32_t chunk = $sr(notationDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(notationDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc(notationDecl)->setValues($nc($nc(this->fNotationName)->get(chunk))->get(index), $nc($nc(this->fNotationPublicId)->get(chunk))->get(index), $nc($nc(this->fNotationSystemId)->get(chunk))->get(index), $nc($nc(this->fNotationBaseSystemId)->get(chunk))->get(index));
	return true;
}

bool DTDGrammar::getContentSpec(int32_t contentSpecIndex, $XMLContentSpec* contentSpec) {
	if (contentSpecIndex < 0 || contentSpecIndex >= this->fContentSpecCount) {
		return false;
	}
	int32_t chunk = $sr(contentSpecIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(contentSpecIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc(contentSpec)->type = $nc($nc(this->fContentSpecType)->get(chunk))->get(index);
	$set(contentSpec, value, $nc($nc(this->fContentSpecValue)->get(chunk))->get(index));
	$set(contentSpec, otherValue, $nc($nc(this->fContentSpecOtherValue)->get(chunk))->get(index));
	return true;
}

int32_t DTDGrammar::getContentSpecIndex(int32_t elementDeclIndex) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return -1;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return $nc($nc(this->fElementDeclContentSpecIndex)->get(chunk))->get(index);
}

$String* DTDGrammar::getContentSpecAsString(int32_t elementDeclIndex) {
	$useLocalCurrentObjectStackCache();
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return nullptr;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	int32_t contentSpecIndex = $nc($nc(this->fElementDeclContentSpecIndex)->get(chunk))->get(index);
	$var($XMLContentSpec, contentSpec, $new($XMLContentSpec));
	if (getContentSpec(contentSpecIndex, contentSpec)) {
		$var($StringBuffer, str, $new($StringBuffer));
		int32_t parentContentSpecType = (int32_t)(contentSpec->type & (uint32_t)15);
		int32_t nextContentSpec = 0;
		switch (parentContentSpecType) {
		case $XMLContentSpec::CONTENTSPECNODE_LEAF:
			{
				{
					str->append(u'(');
					if (contentSpec->value == nullptr && contentSpec->otherValue == nullptr) {
						str->append("#PCDATA"_s);
					} else {
						str->append(contentSpec->value);
					}
					str->append(u')');
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE:
			{
				{
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					nextContentSpec = contentSpec->type;
					if (nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
						str->append(u'(');
						str->append(contentSpec->value);
						str->append(u')');
					} else if (nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE || nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
						str->append(u'(');
						appendContentSpec(contentSpec, str, true, parentContentSpecType);
						str->append(u')');
					} else {
						appendContentSpec(contentSpec, str, true, parentContentSpecType);
					}
					str->append(u'?');
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE:
			{
				{
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					nextContentSpec = contentSpec->type;
					if (nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
						str->append(u'(');
						if (contentSpec->value == nullptr && contentSpec->otherValue == nullptr) {
							str->append("#PCDATA"_s);
						} else if (contentSpec->otherValue != nullptr) {
							str->append("##any:uri="_s)->append(contentSpec->otherValue);
						} else if (contentSpec->value == nullptr) {
							str->append("##any"_s);
						} else {
							appendContentSpec(contentSpec, str, true, parentContentSpecType);
						}
						str->append(u')');
					} else if (nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE || nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
						str->append(u'(');
						appendContentSpec(contentSpec, str, true, parentContentSpecType);
						str->append(u')');
					} else {
						appendContentSpec(contentSpec, str, true, parentContentSpecType);
					}
					str->append(u'*');
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE:
			{
				{
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					nextContentSpec = contentSpec->type;
					if (nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
						str->append(u'(');
						if (contentSpec->value == nullptr && contentSpec->otherValue == nullptr) {
							str->append("#PCDATA"_s);
						} else if (contentSpec->otherValue != nullptr) {
							str->append("##any:uri="_s)->append(contentSpec->otherValue);
						} else if (contentSpec->value == nullptr) {
							str->append("##any"_s);
						} else {
							str->append(contentSpec->value);
						}
						str->append(u')');
					} else if (nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE || nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || nextContentSpec == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
						str->append(u'(');
						appendContentSpec(contentSpec, str, true, parentContentSpecType);
						str->append(u')');
					} else {
						appendContentSpec(contentSpec, str, true, parentContentSpecType);
					}
					str->append(u'+');
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_CHOICE:
			{}
		case $XMLContentSpec::CONTENTSPECNODE_SEQ:
			{
				{
					appendContentSpec(contentSpec, str, true, parentContentSpecType);
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_ANY:
			{
				{
					str->append("##any"_s);
					if (contentSpec->otherValue != nullptr) {
						str->append(":uri="_s);
						str->append(contentSpec->otherValue);
					}
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER:
			{
				{
					str->append("##other:uri="_s);
					str->append(contentSpec->otherValue);
					break;
				}
			}
		case $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL:
			{
				{
					str->append("##local"_s);
					break;
				}
			}
		default:
			{
				{
					str->append("???"_s);
				}
			}
		}
		return str->toString();
	}
	return nullptr;
}

void DTDGrammar::printElements() {
	$useLocalCurrentObjectStackCache();
	int32_t elementDeclIndex = 0;
	$var($XMLElementDecl, elementDecl, $new($XMLElementDecl));
	while (getElementDecl(elementDeclIndex++, elementDecl)) {
		$nc($System::out)->println($$str({"element decl: "_s, elementDecl->name, ", "_s, $nc(elementDecl->name)->rawname}));
	}
}

void DTDGrammar::printAttributes(int32_t elementDeclIndex) {
	int32_t attributeDeclIndex = getFirstAttributeDeclIndex(elementDeclIndex);
	$nc($System::out)->print(elementDeclIndex);
	$nc($System::out)->print(" ["_s);
	while (attributeDeclIndex != -1) {
		$nc($System::out)->print(u' ');
		$nc($System::out)->print(attributeDeclIndex);
		printAttribute(attributeDeclIndex);
		attributeDeclIndex = getNextAttributeDeclIndex(attributeDeclIndex);
		if (attributeDeclIndex != -1) {
			$nc($System::out)->print(","_s);
		}
	}
	$nc($System::out)->println(" ]"_s);
}

void DTDGrammar::addContentSpecToElement($XMLElementDecl* elementDecl) {
	if ((this->fDepth == 0 || (this->fDepth == 1 && $nc(elementDecl)->type == $XMLElementDecl::TYPE_MIXED)) && this->fNodeIndexStack != nullptr) {
		if (elementDecl->type == $XMLElementDecl::TYPE_MIXED) {
			int32_t pcdata = addUniqueLeafNode(nullptr);
			if ($nc(this->fNodeIndexStack)->get(0) == -1) {
				$nc(this->fNodeIndexStack)->set(0, pcdata);
			} else {
				$nc(this->fNodeIndexStack)->set(0, addContentSpecNode($XMLContentSpec::CONTENTSPECNODE_CHOICE, pcdata, $nc(this->fNodeIndexStack)->get(0)));
			}
		}
		setContentSpecIndex(this->fCurrentElementIndex, $nc(this->fNodeIndexStack)->get(this->fDepth));
	}
}

$ContentModelValidator* DTDGrammar::getElementContentModelValidator(int32_t elementDeclIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$var($ContentModelValidator, contentModel, $nc($nc(this->fElementDeclContentModelValidator)->get(chunk))->get(index));
	if (contentModel != nullptr) {
		return contentModel;
	}
	int32_t contentType = $nc($nc(this->fElementDeclType)->get(chunk))->get(index);
	if (contentType == $XMLElementDecl::TYPE_SIMPLE) {
		return nullptr;
	}
	int32_t contentSpecIndex = $nc($nc(this->fElementDeclContentSpecIndex)->get(chunk))->get(index);
	$var($XMLContentSpec, contentSpec, $new($XMLContentSpec));
	getContentSpec(contentSpecIndex, contentSpec);
	if (contentType == $XMLElementDecl::TYPE_MIXED) {
		$var($DTDGrammar$ChildrenList, children, $new($DTDGrammar$ChildrenList));
		contentSpecTree(contentSpecIndex, contentSpec, children);
		$assign(contentModel, $new($MixedContentModel, children->qname, children->type, 0, children->length, false));
	} else if (contentType == $XMLElementDecl::TYPE_CHILDREN) {
		$assign(contentModel, createChildModel(contentSpecIndex));
	} else {
		$throwNew($RuntimeException, "Unknown content type for a element decl in getElementContentModelValidator() in AbstractDTDGrammar class"_s);
	}
	$nc($nc(this->fElementDeclContentModelValidator)->get(chunk))->set(index, contentModel);
	return contentModel;
}

int32_t DTDGrammar::createElementDecl() {
	int32_t chunk = $sr(this->fElementDeclCount, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fElementDeclCount & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureElementDeclCapacity(chunk);
	$nc($nc(this->fElementDeclName)->get(chunk))->set(index, $$new($QName));
	$nc($nc(this->fElementDeclType)->get(chunk))->set(index, (int16_t)-1);
	$nc($nc(this->fElementDeclContentModelValidator)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(chunk))->set(index, -1);
	$nc($nc(this->fElementDeclLastAttributeDeclIndex)->get(chunk))->set(index, -1);
	return this->fElementDeclCount++;
}

void DTDGrammar::setElementDecl(int32_t elementDeclIndex, $XMLElementDecl* elementDecl) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc($nc(this->fElementDeclName)->get(chunk))->get(index))->setValues($nc(elementDecl)->name);
	$nc($nc(this->fElementDeclType)->get(chunk))->set(index, $nc(elementDecl)->type);
	$nc($nc(this->fElementDeclContentModelValidator)->get(chunk))->set(index, elementDecl->contentModelValidator);
	if ($nc(elementDecl->simpleType)->list == true) {
		(*$nc($nc(this->fElementDeclType)->get(chunk)))[index] |= DTDGrammar::LIST_FLAG;
	}
	$nc(this->fElementIndexMap)->put($nc(elementDecl->name)->rawname, $($Integer::valueOf(elementDeclIndex)));
}

void DTDGrammar::putElementNameMapping($QName* name, int32_t scope, int32_t elementDeclIndex) {
}

void DTDGrammar::setFirstAttributeDeclIndex(int32_t elementDeclIndex, int32_t newFirstAttrIndex) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(chunk))->set(index, newFirstAttrIndex);
}

void DTDGrammar::setContentSpecIndex(int32_t elementDeclIndex, int32_t contentSpecIndex) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(this->fElementDeclContentSpecIndex)->get(chunk))->set(index, contentSpecIndex);
}

int32_t DTDGrammar::createAttributeDecl() {
	int32_t chunk = $sr(this->fAttributeDeclCount, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fAttributeDeclCount & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureAttributeDeclCapacity(chunk);
	$nc($nc(this->fAttributeDeclName)->get(chunk))->set(index, $$new($QName));
	$nc($nc(this->fAttributeDeclType)->get(chunk))->set(index, (int16_t)-1);
	$nc($nc(this->fAttributeDeclDatatypeValidator)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclEnumeration)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclDefaultType)->get(chunk))->set(index, $XMLSimpleType::DEFAULT_TYPE_IMPLIED);
	$nc($nc(this->fAttributeDeclDefaultValue)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclNonNormalizedDefaultValue)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(chunk))->set(index, -1);
	return this->fAttributeDeclCount++;
}

void DTDGrammar::setAttributeDecl(int32_t elementDeclIndex, int32_t attributeDeclIndex, $XMLAttributeDecl* attributeDecl) {
	int32_t attrChunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t attrIndex = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc($nc(this->fAttributeDeclName)->get(attrChunk))->get(attrIndex))->setValues($nc(attributeDecl)->name);
	$nc($nc(this->fAttributeDeclType)->get(attrChunk))->set(attrIndex, $nc($nc(attributeDecl)->simpleType)->type);
	if ($nc(attributeDecl->simpleType)->list) {
		(*$nc($nc(this->fAttributeDeclType)->get(attrChunk)))[attrIndex] |= DTDGrammar::LIST_FLAG;
	}
	$nc($nc(this->fAttributeDeclEnumeration)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->enumeration);
	$nc($nc(this->fAttributeDeclDefaultType)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->defaultType);
	$nc($nc(this->fAttributeDeclDatatypeValidator)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->datatypeValidator);
	$nc($nc(this->fAttributeDeclDefaultValue)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->defaultValue);
	$nc($nc(this->fAttributeDeclNonNormalizedDefaultValue)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->nonNormalizedDefaultValue);
	int32_t elemChunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t elemIndex = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	int32_t index = $nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(elemChunk))->get(elemIndex);
	while (index != -1) {
		if (index == attributeDeclIndex) {
			break;
		}
		attrChunk = $sr(index, DTDGrammar::CHUNK_SHIFT);
		attrIndex = (int32_t)(index & (uint32_t)DTDGrammar::CHUNK_MASK);
		index = $nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(attrChunk))->get(attrIndex);
	}
	if (index == -1) {
		if ($nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(elemChunk))->get(elemIndex) == -1) {
			$nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(elemChunk))->set(elemIndex, attributeDeclIndex);
		} else {
			index = $nc($nc(this->fElementDeclLastAttributeDeclIndex)->get(elemChunk))->get(elemIndex);
			attrChunk = $sr(index, DTDGrammar::CHUNK_SHIFT);
			attrIndex = (int32_t)(index & (uint32_t)DTDGrammar::CHUNK_MASK);
			$nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(attrChunk))->set(attrIndex, attributeDeclIndex);
		}
		$nc($nc(this->fElementDeclLastAttributeDeclIndex)->get(elemChunk))->set(elemIndex, attributeDeclIndex);
	}
}

int32_t DTDGrammar::createContentSpec() {
	int32_t chunk = $sr(this->fContentSpecCount, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fContentSpecCount & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureContentSpecCapacity(chunk);
	$nc($nc(this->fContentSpecType)->get(chunk))->set(index, (int16_t)-1);
	$nc($nc(this->fContentSpecValue)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fContentSpecOtherValue)->get(chunk))->set(index, nullptr);
	return this->fContentSpecCount++;
}

void DTDGrammar::setContentSpec(int32_t contentSpecIndex, $XMLContentSpec* contentSpec) {
	int32_t chunk = $sr(contentSpecIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(contentSpecIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(this->fContentSpecType)->get(chunk))->set(index, $nc(contentSpec)->type);
	$nc($nc(this->fContentSpecValue)->get(chunk))->set(index, contentSpec->value);
	$nc($nc(this->fContentSpecOtherValue)->get(chunk))->set(index, contentSpec->otherValue);
}

int32_t DTDGrammar::createEntityDecl() {
	int32_t chunk = $sr(this->fEntityCount, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fEntityCount & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureEntityDeclCapacity(chunk);
	$nc($nc(this->fEntityIsPE)->get(chunk))->set(index, (int8_t)0);
	$nc($nc(this->fEntityInExternal)->get(chunk))->set(index, (int8_t)0);
	return this->fEntityCount++;
}

void DTDGrammar::setEntityDecl(int32_t entityDeclIndex, $XMLEntityDecl* entityDecl) {
	int32_t chunk = $sr(entityDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(entityDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(this->fEntityName)->get(chunk))->set(index, $nc(entityDecl)->name);
	$nc($nc(this->fEntityValue)->get(chunk))->set(index, entityDecl->value);
	$nc($nc(this->fEntityPublicId)->get(chunk))->set(index, entityDecl->publicId);
	$nc($nc(this->fEntitySystemId)->get(chunk))->set(index, entityDecl->systemId);
	$nc($nc(this->fEntityBaseSystemId)->get(chunk))->set(index, entityDecl->baseSystemId);
	$nc($nc(this->fEntityNotation)->get(chunk))->set(index, entityDecl->notation);
	$nc($nc(this->fEntityIsPE)->get(chunk))->set(index, entityDecl->isPE ? (int8_t)1 : (int8_t)0);
	$nc($nc(this->fEntityInExternal)->get(chunk))->set(index, entityDecl->inExternal ? (int8_t)1 : (int8_t)0);
	$nc(this->fEntityIndexMap)->put(entityDecl->name, $($Integer::valueOf(entityDeclIndex)));
}

int32_t DTDGrammar::createNotationDecl() {
	int32_t chunk = $sr(this->fNotationCount, DTDGrammar::CHUNK_SHIFT);
	ensureNotationDeclCapacity(chunk);
	return this->fNotationCount++;
}

void DTDGrammar::setNotationDecl(int32_t notationDeclIndex, $XMLNotationDecl* notationDecl) {
	int32_t chunk = $sr(notationDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(notationDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(this->fNotationName)->get(chunk))->set(index, $nc(notationDecl)->name);
	$nc($nc(this->fNotationPublicId)->get(chunk))->set(index, notationDecl->publicId);
	$nc($nc(this->fNotationSystemId)->get(chunk))->set(index, notationDecl->systemId);
	$nc($nc(this->fNotationBaseSystemId)->get(chunk))->set(index, notationDecl->baseSystemId);
	$nc(this->fNotationIndexMap)->put(notationDecl->name, $($Integer::valueOf(notationDeclIndex)));
}

int32_t DTDGrammar::addContentSpecNode(int16_t nodeType, $String* nodeValue) {
	int32_t contentSpecIndex = createContentSpec();
	$nc(this->fContentSpec)->setValues(nodeType, nodeValue, nullptr);
	setContentSpec(contentSpecIndex, this->fContentSpec);
	return contentSpecIndex;
}

int32_t DTDGrammar::addUniqueLeafNode($String* elementName) {
	int32_t contentSpecIndex = createContentSpec();
	$nc(this->fContentSpec)->setValues($XMLContentSpec::CONTENTSPECNODE_LEAF, elementName, nullptr);
	setContentSpec(contentSpecIndex, this->fContentSpec);
	return contentSpecIndex;
}

int32_t DTDGrammar::addContentSpecNode(int16_t nodeType, int32_t leftNodeIndex, int32_t rightNodeIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t contentSpecIndex = createContentSpec();
	$var($ints, leftIntArray, $new($ints, 1));
	$var($ints, rightIntArray, $new($ints, 1));
	leftIntArray->set(0, leftNodeIndex);
	rightIntArray->set(0, rightNodeIndex);
	$nc(this->fContentSpec)->setValues(nodeType, leftIntArray, rightIntArray);
	setContentSpec(contentSpecIndex, this->fContentSpec);
	return contentSpecIndex;
}

void DTDGrammar::initializeContentModelStack() {
	$useLocalCurrentObjectStackCache();
	if (this->fOpStack == nullptr) {
		$set(this, fOpStack, $new($shorts, 8));
		$set(this, fNodeIndexStack, $new($ints, 8));
		$set(this, fPrevNodeIndexStack, $new($ints, 8));
	} else if (this->fDepth == $nc(this->fOpStack)->length) {
		$var($shorts, newStack, $new($shorts, this->fDepth * 2));
		$System::arraycopy(this->fOpStack, 0, newStack, 0, this->fDepth);
		$set(this, fOpStack, newStack);
		$var($ints, newIntStack, $new($ints, this->fDepth * 2));
		$System::arraycopy(this->fNodeIndexStack, 0, newIntStack, 0, this->fDepth);
		$set(this, fNodeIndexStack, newIntStack);
		$assign(newIntStack, $new($ints, this->fDepth * 2));
		$System::arraycopy(this->fPrevNodeIndexStack, 0, newIntStack, 0, this->fDepth);
		$set(this, fPrevNodeIndexStack, newIntStack);
	}
	$nc(this->fOpStack)->set(this->fDepth, (int16_t)-1);
	$nc(this->fNodeIndexStack)->set(this->fDepth, -1);
	$nc(this->fPrevNodeIndexStack)->set(this->fDepth, -1);
}

bool DTDGrammar::isImmutable() {
	return this->fIsImmutable;
}

void DTDGrammar::appendContentSpec($XMLContentSpec* contentSpec, $StringBuffer* str, bool parens, int32_t parentContentSpecType) {
	int32_t thisContentSpec = (int32_t)($nc(contentSpec)->type & (uint32_t)15);
	switch (thisContentSpec) {
	case $XMLContentSpec::CONTENTSPECNODE_LEAF:
		{
			{
				if (contentSpec->value == nullptr && contentSpec->otherValue == nullptr) {
					$nc(str)->append("#PCDATA"_s);
				} else if (contentSpec->value == nullptr && contentSpec->otherValue != nullptr) {
					$nc(str)->append("##any:uri="_s)->append(contentSpec->otherValue);
				} else if (contentSpec->value == nullptr) {
					$nc(str)->append("##any"_s);
				} else {
					$nc(str)->append(contentSpec->value);
				}
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE:
		{
			{
				if (parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE || parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					$nc(str)->append(u'(');
					appendContentSpec(contentSpec, str, true, thisContentSpec);
					str->append(u')');
				} else {
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					appendContentSpec(contentSpec, str, true, thisContentSpec);
				}
				$nc(str)->append(u'?');
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE:
		{
			{
				if (parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE || parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					$nc(str)->append(u'(');
					appendContentSpec(contentSpec, str, true, thisContentSpec);
					str->append(u')');
				} else {
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					appendContentSpec(contentSpec, str, true, thisContentSpec);
				}
				$nc(str)->append(u'*');
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE:
		{
			{
				if (parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE || parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || parentContentSpecType == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
					$nc(str)->append(u'(');
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					appendContentSpec(contentSpec, str, true, thisContentSpec);
					str->append(u')');
				} else {
					getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
					appendContentSpec(contentSpec, str, true, thisContentSpec);
				}
				$nc(str)->append(u'+');
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_CHOICE:
		{}
	case $XMLContentSpec::CONTENTSPECNODE_SEQ:
		{
			{
				if (parens) {
					$nc(str)->append(u'(');
				}
				int32_t type = contentSpec->type;
				int32_t otherValue = $nc(($cast($ints, contentSpec->otherValue)))->get(0);
				getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpec);
				appendContentSpec(contentSpec, str, contentSpec->type != type, thisContentSpec);
				if (type == $XMLContentSpec::CONTENTSPECNODE_CHOICE) {
					$nc(str)->append(u'|');
				} else {
					$nc(str)->append(u',');
				}
				getContentSpec(otherValue, contentSpec);
				appendContentSpec(contentSpec, str, true, thisContentSpec);
				if (parens) {
					$nc(str)->append(u')');
				}
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_ANY:
		{
			{
				$nc(str)->append("##any"_s);
				if (contentSpec->otherValue != nullptr) {
					str->append(":uri="_s);
					str->append(contentSpec->otherValue);
				}
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER:
		{
			{
				$nc(str)->append("##other:uri="_s);
				str->append(contentSpec->otherValue);
				break;
			}
		}
	case $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL:
		{
			{
				$nc(str)->append("##local"_s);
				break;
			}
		}
	default:
		{
			{
				$nc(str)->append("???"_s);
				break;
			}
		}
	}
}

void DTDGrammar::printAttribute(int32_t attributeDeclIndex) {
	$var($XMLAttributeDecl, attributeDecl, $new($XMLAttributeDecl));
	if (getAttributeDecl(attributeDeclIndex, attributeDecl)) {
		$nc($System::out)->print(" { "_s);
		$nc($System::out)->print($nc(attributeDecl->name)->localpart);
		$nc($System::out)->print(" }"_s);
	}
}

$ContentModelValidator* DTDGrammar::createChildModel(int32_t contentSpecIndex) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($XMLContentSpec, contentSpec, $new($XMLContentSpec));
		getContentSpec(contentSpecIndex, contentSpec);
		if (((int32_t)(contentSpec->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY || ((int32_t)(contentSpec->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER || ((int32_t)(contentSpec->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL) {
		} else if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
			if (contentSpec->value == nullptr && contentSpec->otherValue == nullptr) {
				$throwNew($RuntimeException, "ImplementationMessages.VAL_NPCD"_s);
			}
			$nc(this->fQName)->setValues(nullptr, $cast($String, contentSpec->value), $cast($String, contentSpec->value), $cast($String, contentSpec->otherValue));
			return $new($SimpleContentModel, contentSpec->type, this->fQName, nullptr);
		} else if ((contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_CHOICE) || (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_SEQ)) {
			$var($XMLContentSpec, contentSpecLeft, $new($XMLContentSpec));
			$var($XMLContentSpec, contentSpecRight, $new($XMLContentSpec));
			getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpecLeft);
			getContentSpec($nc(($cast($ints, contentSpec->otherValue)))->get(0), contentSpecRight);
			if ((contentSpecLeft->type == $XMLContentSpec::CONTENTSPECNODE_LEAF) && (contentSpecRight->type == $XMLContentSpec::CONTENTSPECNODE_LEAF)) {
				$nc(this->fQName)->setValues(nullptr, $cast($String, contentSpecLeft->value), $cast($String, contentSpecLeft->value), $cast($String, contentSpecLeft->otherValue));
				$nc(this->fQName2)->setValues(nullptr, $cast($String, contentSpecRight->value), $cast($String, contentSpecRight->value), $cast($String, contentSpecRight->otherValue));
				return $new($SimpleContentModel, contentSpec->type, this->fQName, this->fQName2);
			}
		} else if ((contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) || (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE) || (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE)) {
			$var($XMLContentSpec, contentSpecLeft, $new($XMLContentSpec));
			getContentSpec($nc(($cast($ints, contentSpec->value)))->get(0), contentSpecLeft);
			if (contentSpecLeft->type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
				$nc(this->fQName)->setValues(nullptr, $cast($String, contentSpecLeft->value), $cast($String, contentSpecLeft->value), $cast($String, contentSpecLeft->otherValue));
				return $new($SimpleContentModel, contentSpec->type, this->fQName, nullptr);
			}
		} else {
			$throwNew($RuntimeException, "ImplementationMessages.VAL_CST"_s);
		}
		this->fLeafCount = 0;
		this->fLeafCount = 0;
		$var($CMNode, cmn, buildSyntaxTree(contentSpecIndex, contentSpec));
		return $new($DFAContentModel, cmn, this->fLeafCount, false);
	}
}

$CMNode* DTDGrammar::buildSyntaxTree(int32_t startNode, $XMLContentSpec* contentSpec) {
	$useLocalCurrentObjectStackCache();
	$var($CMNode, nodeRet, nullptr);
	getContentSpec(startNode, contentSpec);
	if (((int32_t)($nc(contentSpec)->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY) {
		$assign(nodeRet, $new($CMAny, contentSpec->type, $cast($String, contentSpec->otherValue), this->fLeafCount++));
	} else if (((int32_t)(contentSpec->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER) {
		$assign(nodeRet, $new($CMAny, contentSpec->type, $cast($String, contentSpec->otherValue), this->fLeafCount++));
	} else if (((int32_t)(contentSpec->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL) {
		$assign(nodeRet, $new($CMAny, contentSpec->type, nullptr, this->fLeafCount++));
	} else if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
		$nc(this->fQName)->setValues(nullptr, $cast($String, contentSpec->value), $cast($String, contentSpec->value), $cast($String, contentSpec->otherValue));
		$assign(nodeRet, $new($CMLeaf, this->fQName, this->fLeafCount++));
	} else {
		int32_t leftNode = $nc(($cast($ints, contentSpec->value)))->get(0);
		int32_t rightNode = $nc(($cast($ints, contentSpec->otherValue)))->get(0);
		if ((contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_CHOICE) || (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_SEQ)) {
			int32_t var$0 = (int32_t)contentSpec->type;
			$var($CMNode, var$1, buildSyntaxTree(leftNode, contentSpec));
			$assign(nodeRet, $new($CMBinOp, var$0, var$1, $(buildSyntaxTree(rightNode, contentSpec))));
		} else if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE) {
			$assign(nodeRet, $new($CMUniOp, contentSpec->type, $(buildSyntaxTree(leftNode, contentSpec))));
		} else if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE) {
			$assign(nodeRet, $new($CMUniOp, contentSpec->type, $(buildSyntaxTree(leftNode, contentSpec))));
		} else {
			$throwNew($RuntimeException, "ImplementationMessages.VAL_CST"_s);
		}
	}
	return nodeRet;
}

void DTDGrammar::contentSpecTree(int32_t contentSpecIndex, $XMLContentSpec* contentSpec, $DTDGrammar$ChildrenList* children) {
	$useLocalCurrentObjectStackCache();
	getContentSpec(contentSpecIndex, contentSpec);
	if ($nc(contentSpec)->type == $XMLContentSpec::CONTENTSPECNODE_LEAF || ((int32_t)($nc(contentSpec)->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY || ((int32_t)($nc(contentSpec)->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL || ((int32_t)($nc(contentSpec)->type & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER) {
		if ($nc(children)->length == $nc(children->qname)->length) {
			$var($QNameArray, newQName, $new($QNameArray, children->length * 2));
			$System::arraycopy(children->qname, 0, newQName, 0, children->length);
			$set(children, qname, newQName);
			$var($ints, newType, $new($ints, children->length * 2));
			$System::arraycopy(children->type, 0, newType, 0, children->length);
			$set(children, type, newType);
		}
		$nc($nc(children)->qname)->set(children->length, $$new($QName, nullptr, $cast($String, contentSpec->value), $cast($String, contentSpec->value), $cast($String, contentSpec->otherValue)));
		$nc(children->type)->set(children->length, contentSpec->type);
		++children->length;
		return;
	}
	int32_t leftNode = $nc(contentSpec)->value != nullptr ? $nc((($cast($ints, $nc(contentSpec)->value))))->get(0) : -1;
	int32_t rightNode = -1;
	if (contentSpec->otherValue != nullptr) {
		rightNode = $nc((($cast($ints, contentSpec->otherValue))))->get(0);
	} else {
		return;
	}
	if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_CHOICE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_SEQ) {
		contentSpecTree(leftNode, contentSpec, children);
		contentSpecTree(rightNode, contentSpec, children);
		return;
	}
	if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE) {
		contentSpecTree(leftNode, contentSpec, children);
		return;
	}
	$throwNew($RuntimeException, $$str({"Invalid content spec type seen in contentSpecTree() method of AbstractDTDGrammar class : "_s, $$str(contentSpec->type)}));
}

void DTDGrammar::ensureElementDeclCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fElementDeclName)->length) {
		$set(this, fElementDeclIsExternal, resize(this->fElementDeclIsExternal, $nc(this->fElementDeclIsExternal)->length * 2));
		$set(this, fElementDeclName, resize(this->fElementDeclName, $nc(this->fElementDeclName)->length * 2));
		$set(this, fElementDeclType, resize(this->fElementDeclType, $nc(this->fElementDeclType)->length * 2));
		$set(this, fElementDeclContentModelValidator, resize(this->fElementDeclContentModelValidator, $nc(this->fElementDeclContentModelValidator)->length * 2));
		$set(this, fElementDeclContentSpecIndex, resize(this->fElementDeclContentSpecIndex, $nc(this->fElementDeclContentSpecIndex)->length * 2));
		$set(this, fElementDeclFirstAttributeDeclIndex, resize(this->fElementDeclFirstAttributeDeclIndex, $nc(this->fElementDeclFirstAttributeDeclIndex)->length * 2));
		$set(this, fElementDeclLastAttributeDeclIndex, resize(this->fElementDeclLastAttributeDeclIndex, $nc(this->fElementDeclLastAttributeDeclIndex)->length * 2));
	} else if ($nc(this->fElementDeclName)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fElementDeclIsExternal)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclName)->set(chunk, $$new($QNameArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclContentModelValidator)->set(chunk, $$new($ContentModelValidatorArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclContentSpecIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclFirstAttributeDeclIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclLastAttributeDeclIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	return;
}

void DTDGrammar::ensureAttributeDeclCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fAttributeDeclName)->length) {
		$set(this, fAttributeDeclIsExternal, resize(this->fAttributeDeclIsExternal, $nc(this->fAttributeDeclIsExternal)->length * 2));
		$set(this, fAttributeDeclName, resize(this->fAttributeDeclName, $nc(this->fAttributeDeclName)->length * 2));
		$set(this, fAttributeDeclType, resize(this->fAttributeDeclType, $nc(this->fAttributeDeclType)->length * 2));
		$set(this, fAttributeDeclEnumeration, resize(this->fAttributeDeclEnumeration, $nc(this->fAttributeDeclEnumeration)->length * 2));
		$set(this, fAttributeDeclDefaultType, resize(this->fAttributeDeclDefaultType, $nc(this->fAttributeDeclDefaultType)->length * 2));
		$set(this, fAttributeDeclDatatypeValidator, resize(this->fAttributeDeclDatatypeValidator, $nc(this->fAttributeDeclDatatypeValidator)->length * 2));
		$set(this, fAttributeDeclDefaultValue, resize(this->fAttributeDeclDefaultValue, $nc(this->fAttributeDeclDefaultValue)->length * 2));
		$set(this, fAttributeDeclNonNormalizedDefaultValue, resize(this->fAttributeDeclNonNormalizedDefaultValue, $nc(this->fAttributeDeclNonNormalizedDefaultValue)->length * 2));
		$set(this, fAttributeDeclNextAttributeDeclIndex, resize(this->fAttributeDeclNextAttributeDeclIndex, $nc(this->fAttributeDeclNextAttributeDeclIndex)->length * 2));
	} else if ($nc(this->fAttributeDeclName)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fAttributeDeclIsExternal)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclName)->set(chunk, $$new($QNameArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclEnumeration)->set(chunk, $$new($StringArray2, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclDefaultType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclDatatypeValidator)->set(chunk, $$new($DatatypeValidatorArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclDefaultValue)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclNonNormalizedDefaultValue)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclNextAttributeDeclIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	return;
}

void DTDGrammar::ensureEntityDeclCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fEntityName)->length) {
		$set(this, fEntityName, resize(this->fEntityName, $nc(this->fEntityName)->length * 2));
		$set(this, fEntityValue, resize(this->fEntityValue, $nc(this->fEntityValue)->length * 2));
		$set(this, fEntityPublicId, resize(this->fEntityPublicId, $nc(this->fEntityPublicId)->length * 2));
		$set(this, fEntitySystemId, resize(this->fEntitySystemId, $nc(this->fEntitySystemId)->length * 2));
		$set(this, fEntityBaseSystemId, resize(this->fEntityBaseSystemId, $nc(this->fEntityBaseSystemId)->length * 2));
		$set(this, fEntityNotation, resize(this->fEntityNotation, $nc(this->fEntityNotation)->length * 2));
		$set(this, fEntityIsPE, resize(this->fEntityIsPE, $nc(this->fEntityIsPE)->length * 2));
		$set(this, fEntityInExternal, resize(this->fEntityInExternal, $nc(this->fEntityInExternal)->length * 2));
	} else if ($nc(this->fEntityName)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fEntityName)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntityValue)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntityPublicId)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntitySystemId)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntityBaseSystemId)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntityNotation)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntityIsPE)->set(chunk, $$new($bytes, DTDGrammar::CHUNK_SIZE));
	$nc(this->fEntityInExternal)->set(chunk, $$new($bytes, DTDGrammar::CHUNK_SIZE));
	return;
}

void DTDGrammar::ensureNotationDeclCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fNotationName)->length) {
		$set(this, fNotationName, resize(this->fNotationName, $nc(this->fNotationName)->length * 2));
		$set(this, fNotationPublicId, resize(this->fNotationPublicId, $nc(this->fNotationPublicId)->length * 2));
		$set(this, fNotationSystemId, resize(this->fNotationSystemId, $nc(this->fNotationSystemId)->length * 2));
		$set(this, fNotationBaseSystemId, resize(this->fNotationBaseSystemId, $nc(this->fNotationBaseSystemId)->length * 2));
	} else if ($nc(this->fNotationName)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fNotationName)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fNotationPublicId)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fNotationSystemId)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fNotationBaseSystemId)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	return;
}

void DTDGrammar::ensureContentSpecCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fContentSpecType)->length) {
		$set(this, fContentSpecType, resize(this->fContentSpecType, $nc(this->fContentSpecType)->length * 2));
		$set(this, fContentSpecValue, resize(this->fContentSpecValue, $nc(this->fContentSpecValue)->length * 2));
		$set(this, fContentSpecOtherValue, resize(this->fContentSpecOtherValue, $nc(this->fContentSpecOtherValue)->length * 2));
	} else if ($nc(this->fContentSpecType)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fContentSpecType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fContentSpecValue)->set(chunk, $$new($ObjectArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fContentSpecOtherValue)->set(chunk, $$new($ObjectArray, DTDGrammar::CHUNK_SIZE));
	return;
}

$byteArray2* DTDGrammar::resize($byteArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($byteArray2, newarray, $new($byteArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$shortArray2* DTDGrammar::resize($shortArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($shortArray2, newarray, $new($shortArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$intArray2* DTDGrammar::resize($intArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($intArray2, newarray, $new($intArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$DatatypeValidatorArray2* DTDGrammar::resize($DatatypeValidatorArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($DatatypeValidatorArray2, newarray, $new($DatatypeValidatorArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$ContentModelValidatorArray2* DTDGrammar::resize($ContentModelValidatorArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($ContentModelValidatorArray2, newarray, $new($ContentModelValidatorArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$ObjectArray2* DTDGrammar::resize($ObjectArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($ObjectArray2, newarray, $new($ObjectArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$QNameArray2* DTDGrammar::resize($QNameArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($QNameArray2, newarray, $new($QNameArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$StringArray2* DTDGrammar::resize($StringArray2* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($StringArray2, newarray, $new($StringArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$StringArray3* DTDGrammar::resize($StringArray3* array, int32_t newsize) {
	$init(DTDGrammar);
	$var($StringArray3, newarray, $new($StringArray3, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool DTDGrammar::isEntityDeclared($String* name) {
	return (getEntityDeclIndex(name) != -1) ? true : false;
}

bool DTDGrammar::isEntityUnparsed($String* name) {
	int32_t entityIndex = getEntityDeclIndex(name);
	if (entityIndex > -1) {
		int32_t chunk = $sr(entityIndex, DTDGrammar::CHUNK_SHIFT);
		int32_t index = (int32_t)(entityIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
		return ($nc($nc(this->fEntityNotation)->get(chunk))->get(index) != nullptr) ? true : false;
	}
	return false;
}

DTDGrammar::DTDGrammar() {
}

$Class* DTDGrammar::load$($String* name, bool initialize) {
	$loadClass(DTDGrammar, name, initialize, &_DTDGrammar_ClassInfo_, allocate$DTDGrammar);
	return class$;
}

$Class* DTDGrammar::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com