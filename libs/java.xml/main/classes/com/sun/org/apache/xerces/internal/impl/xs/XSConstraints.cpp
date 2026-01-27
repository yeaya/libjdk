#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTVAL_STRING
#undef COMPLEX_TYPE
#undef CONTENTTYPE_MIXED
#undef CONTENTTYPE_SIMPLE
#undef DERIVATION_EXTENSION
#undef DERIVATION_LIST
#undef DERIVATION_NONE
#undef DERIVATION_RESTRICTION
#undef DERIVATION_UNION
#undef ELEMENT_PARTICLE_COMPARATOR
#undef EMPTY_LIST
#undef MODELGROUP_ALL
#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE
#undef NSCONSTRAINT_LIST
#undef OCCURRENCE_UNBOUNDED
#undef OCCURRENCE_UNKNOWN
#undef PARTICLE_ELEMENT
#undef PARTICLE_MODELGROUP
#undef PARTICLE_WILDCARD
#undef SCHEMA_DOMAIN
#undef SCOPE_GLOBAL
#undef SEVERITY_ERROR
#undef SIMPLE_TYPE
#undef STRING_TYPE
#undef VARIETY_LIST
#undef VARIETY_UNION
#undef VC_FIXED

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $XSComplexTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>;
using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $XSGroupDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl>;
using $SimpleLocatorArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator>;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $XMLSchemaException = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaException;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSConstraints$1 = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints$1;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $CMBuilder = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder;
using $XSCMValidator = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSConstraints_FieldInfo_[] = {
	{"OCCURRENCE_UNKNOWN", "I", nullptr, $STATIC | $FINAL, $constField(XSConstraints, OCCURRENCE_UNKNOWN)},
	{"STRING_TYPE", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $STATIC | $FINAL, $staticField(XSConstraints, STRING_TYPE)},
	{"fEmptyParticle", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE | $STATIC, $staticField(XSConstraints, fEmptyParticle)},
	{"ELEMENT_PARTICLE_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XSConstraints, ELEMENT_PARTICLE_COMPARATOR)},
	{}
};

$MethodInfo _XSConstraints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSConstraints, init$, void)},
	{"ElementDefaultValidImmediate", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, ElementDefaultValidImmediate, $Object*, $XSTypeDefinition*, $String*, $ValidationContext*, $ValidatedInfo*)},
	{"addElementToParticleVector", "(Ljava/util/List;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, addElementToParticleVector, void, $List*, $XSElementDecl*)},
	{"checkComplexDerivation", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkComplexDerivation, bool, $XSComplexTypeDecl*, $XSTypeDefinition*, int16_t)},
	{"checkComplexDerivationOk", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, checkComplexDerivationOk, bool, $XSComplexTypeDecl*, $XSTypeDefinition*, int16_t)},
	{"checkElementDeclsConsistent", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/util/SymbolHash;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, checkElementDeclsConsistent, void, $XSComplexTypeDecl*, $XSParticleDecl*, $SymbolHash*, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkIDConstraintRestriction", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkIDConstraintRestriction, void, $XSElementDecl*, $XSElementDecl*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkMapAndSum", "(Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkMapAndSum, void, $List*, int32_t, int32_t, $SubstitutionGroupHandler*, $List*, int32_t, int32_t, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkNSCompat", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;IILcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;IIZ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkNSCompat, void, $XSElementDecl*, int32_t, int32_t, $XSWildcardDecl*, int32_t, int32_t, bool), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkNSRecurseCheckCardinality", "(Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;IIZ)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;IIZ)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkNSRecurseCheckCardinality, void, $List*, int32_t, int32_t, $SubstitutionGroupHandler*, $XSParticleDecl*, int32_t, int32_t, bool), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkNSSubset", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;IILcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkNSSubset, void, $XSWildcardDecl*, int32_t, int32_t, $XSWildcardDecl*, int32_t, int32_t), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkNameAndTypeOK", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;IILcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkNameAndTypeOK, void, $XSElementDecl*, int32_t, int32_t, $XSElementDecl*, int32_t, int32_t), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkOccurrenceRange", "(IIII)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkOccurrenceRange, bool, int32_t, int32_t, int32_t, int32_t)},
	{"checkRecurse", "(Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkRecurse, void, $List*, int32_t, int32_t, $SubstitutionGroupHandler*, $List*, int32_t, int32_t, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkRecurseLax", "(Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkRecurseLax, void, $List*, int32_t, int32_t, $SubstitutionGroupHandler*, $List*, int32_t, int32_t, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkRecurseUnordered", "(Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;IILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkRecurseUnordered, void, $List*, int32_t, int32_t, $SubstitutionGroupHandler*, $List*, int32_t, int32_t, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"checkSimpleDerivation", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;S)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, checkSimpleDerivation, bool, $XSSimpleType*, $XSSimpleType*, int16_t)},
	{"checkSimpleDerivationOk", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, checkSimpleDerivationOk, bool, $XSSimpleType*, $XSTypeDefinition*, int16_t)},
	{"checkTypeDerivationOk", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, checkTypeDerivationOk, bool, $XSTypeDefinition*, $XSTypeDefinition*, int16_t)},
	{"findElemInTable", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/util/SymbolHash;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, findElemInTable, void, $XSComplexTypeDecl*, $XSElementDecl*, $SymbolHash*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"fullSchemaChecking", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, fullSchemaChecking, void, $XSGrammarBucket*, $SubstitutionGroupHandler*, $CMBuilder*, $XMLErrorReporter*)},
	{"gatherChildren", "(ILcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Ljava/util/List;)V", "(ILcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;)V", $PRIVATE | $STATIC, $staticMethod(XSConstraints, gatherChildren, void, int32_t, $XSParticleDecl*, $List*)},
	{"getEmptySequence", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, getEmptySequence, $XSParticleDecl*)},
	{"getNonUnaryGroup", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, getNonUnaryGroup, $XSParticleDecl*, $XSParticleDecl*)},
	{"overlapUPA", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, overlapUPA, bool, $XSElementDecl*, $XSElementDecl*, $SubstitutionGroupHandler*)},
	{"overlapUPA", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, overlapUPA, bool, $XSElementDecl*, $XSWildcardDecl*, $SubstitutionGroupHandler*)},
	{"overlapUPA", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, overlapUPA, bool, $XSWildcardDecl*, $XSWildcardDecl*)},
	{"overlapUPA", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XSConstraints, overlapUPA, bool, Object$*, Object$*, $SubstitutionGroupHandler*)},
	{"particleValidRestriction", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, particleValidRestriction, bool, $XSParticleDecl*, $SubstitutionGroupHandler*, $XSParticleDecl*, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"particleValidRestriction", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;Z)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XSConstraints, particleValidRestriction, bool, $XSParticleDecl*, $SubstitutionGroupHandler*, $XSParticleDecl*, $SubstitutionGroupHandler*, bool), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"removePointlessChildren", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Ljava/util/List;", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;>;", $PRIVATE | $STATIC, $staticMethod(XSConstraints, removePointlessChildren, $List*, $XSParticleDecl*)},
	{"reportSchemaError", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(XSConstraints, reportSchemaError, void, $XMLErrorReporter*, $SimpleLocator*, $String*, $ObjectArray*)},
	{}
};

$InnerClassInfo _XSConstraints_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSConstraints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints",
	"java.lang.Object",
	nullptr,
	_XSConstraints_FieldInfo_,
	_XSConstraints_MethodInfo_,
	nullptr,
	nullptr,
	_XSConstraints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XSConstraints$1"
};

$Object* allocate$XSConstraints($Class* clazz) {
	return $of($alloc(XSConstraints));
}

$XSSimpleType* XSConstraints::STRING_TYPE = nullptr;
$XSParticleDecl* XSConstraints::fEmptyParticle = nullptr;
$Comparator* XSConstraints::ELEMENT_PARTICLE_COMPARATOR = nullptr;

void XSConstraints::init$() {
}

$XSParticleDecl* XSConstraints::getEmptySequence() {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (XSConstraints::fEmptyParticle == nullptr) {
		$var($XSModelGroupImpl, group, $new($XSModelGroupImpl));
		group->fCompositor = $XSModelGroupImpl::MODELGROUP_SEQUENCE;
		group->fParticleCount = 0;
		$set(group, fParticles, nullptr);
		$init($XSObjectListImpl);
		$set(group, fAnnotations, $XSObjectListImpl::EMPTY_LIST);
		$var($XSParticleDecl, particle, $new($XSParticleDecl));
		particle->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
		$set(particle, fValue, group);
		$set(particle, fAnnotations, $XSObjectListImpl::EMPTY_LIST);
		$assignStatic(XSConstraints::fEmptyParticle, particle);
	}
	return XSConstraints::fEmptyParticle;
}

bool XSConstraints::checkTypeDerivationOk($XSTypeDefinition* derived, $XSTypeDefinition* base$renamed, int16_t block) {
	$init(XSConstraints);
	$var($XSTypeDefinition, base, base$renamed);
	$init($SchemaGrammar);
	if ($equals(derived, $SchemaGrammar::fAnyType)) {
		return derived == base;
	}
	if ($equals(derived, $SchemaGrammar::fAnySimpleType)) {
		return ($equals(base, $SchemaGrammar::fAnyType) || $equals(base, $SchemaGrammar::fAnySimpleType));
	}
	if ($nc(derived)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
		if ($nc(base)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			if ($equals(base, $SchemaGrammar::fAnyType)) {
				$assign(base, $SchemaGrammar::fAnySimpleType);
			} else {
				return false;
			}
		}
		return checkSimpleDerivation($cast($XSSimpleType, derived), $cast($XSSimpleType, base), block);
	} else {
		return checkComplexDerivation($cast($XSComplexTypeDecl, derived), base, block);
	}
}

bool XSConstraints::checkSimpleDerivationOk($XSSimpleType* derived, $XSTypeDefinition* base$renamed, int16_t block) {
	$init(XSConstraints);
	$var($XSTypeDefinition, base, base$renamed);
	$init($SchemaGrammar);
	if (derived == $SchemaGrammar::fAnySimpleType) {
		return ($equals(base, $SchemaGrammar::fAnyType) || $equals(base, $SchemaGrammar::fAnySimpleType));
	}
	if ($nc(base)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		if ($equals(base, $SchemaGrammar::fAnyType)) {
			$assign(base, $SchemaGrammar::fAnySimpleType);
		} else {
			return false;
		}
	}
	return checkSimpleDerivation(derived, $cast($XSSimpleType, base), block);
}

bool XSConstraints::checkComplexDerivationOk($XSComplexTypeDecl* derived, $XSTypeDefinition* base, int16_t block) {
	$init(XSConstraints);
	$init($SchemaGrammar);
	if (derived == $SchemaGrammar::fAnyType) {
		return $equals(derived, base);
	}
	return checkComplexDerivation(derived, base, block);
}

bool XSConstraints::checkSimpleDerivation($XSSimpleType* derived, $XSSimpleType* base$renamed, int16_t block) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	$var($XSSimpleType, base, base$renamed);
	if (derived == base) {
		return true;
	}
	if (((int32_t)(block & (uint32_t)(int32_t)$XSConstants::DERIVATION_RESTRICTION)) != 0 || ((int32_t)($nc($($nc(derived)->getBaseType()))->getFinal() & (uint32_t)(int32_t)$XSConstants::DERIVATION_RESTRICTION)) != 0) {
		return false;
	}
	$var($XSSimpleType, directBase, $cast($XSSimpleType, $nc(derived)->getBaseType()));
	if (directBase == base) {
		return true;
	}
	$init($SchemaGrammar);
	if (directBase != $SchemaGrammar::fAnySimpleType && checkSimpleDerivation(directBase, base, block)) {
		return true;
	}
	bool var$0 = derived->getVariety() == $XSSimpleType::VARIETY_LIST;
	if ((var$0 || derived->getVariety() == $XSSimpleType::VARIETY_UNION) && base == $SchemaGrammar::fAnySimpleType) {
		return true;
	}
	if ($nc(base)->getVariety() == $XSSimpleType::VARIETY_UNION) {
		$var($XSObjectList, subUnionMemberDV, base->getMemberTypes());
		int32_t subUnionSize = $nc(subUnionMemberDV)->getLength();
		for (int32_t i = 0; i < subUnionSize; ++i) {
			$assign(base, $cast($XSSimpleType, subUnionMemberDV->item(i)));
			if (checkSimpleDerivation(derived, base, block)) {
				return true;
			}
		}
	}
	return false;
}

bool XSConstraints::checkComplexDerivation($XSComplexTypeDecl* derived, $XSTypeDefinition* base$renamed, int16_t block) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	$var($XSTypeDefinition, base, base$renamed);
	if ($equals(derived, base)) {
		return true;
	}
	if (((int32_t)($nc(derived)->fDerivedBy & (uint32_t)(int32_t)block)) != 0) {
		return false;
	}
	$var($XSTypeDefinition, directBase, $nc(derived)->fBaseType);
	if (directBase == base) {
		return true;
	}
	$init($SchemaGrammar);
	if ($equals(directBase, $SchemaGrammar::fAnyType) || $equals(directBase, $SchemaGrammar::fAnySimpleType)) {
		return false;
	}
	if ($nc(directBase)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		return checkComplexDerivation($cast($XSComplexTypeDecl, directBase), base, block);
	}
	if ($nc(directBase)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
		if ($nc(base)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			if ($equals(base, $SchemaGrammar::fAnyType)) {
				$assign(base, $SchemaGrammar::fAnySimpleType);
			} else {
				return false;
			}
		}
		return checkSimpleDerivation($cast($XSSimpleType, directBase), $cast($XSSimpleType, base), block);
	}
	return false;
}

$Object* XSConstraints::ElementDefaultValidImmediate($XSTypeDefinition* type, $String* value, $ValidationContext* context, $ValidatedInfo* vinfo) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	$var($XSSimpleType, dv, nullptr);
	if ($nc(type)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
		$assign(dv, $cast($XSSimpleType, type));
	} else {
		$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, type));
		if (ctype->fContentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE) {
			$assign(dv, ctype->fXSSimpleType);
		} else if (ctype->fContentType == $XSComplexTypeDecl::CONTENTTYPE_MIXED) {
			if (!$nc(($cast($XSParticleDecl, $(ctype->getParticle()))))->emptiable()) {
				return $of(nullptr);
			}
		} else {
			return $of(nullptr);
		}
	}
	$var($Object, actualValue, nullptr);
	if (dv == nullptr) {
		$assign(dv, XSConstraints::STRING_TYPE);
	}
	try {
		$assign(actualValue, $nc(dv)->validate(value, context, vinfo));
		if (vinfo != nullptr) {
			$assign(actualValue, dv->validate($(vinfo->stringValue()), context, vinfo));
		}
	} catch ($InvalidDatatypeValueException& ide) {
		return $of(nullptr);
	}
	return $of(actualValue);
}

void XSConstraints::reportSchemaError($XMLErrorReporter* errorReporter, $SimpleLocator* loc, $String* key, $ObjectArray* args) {
	$init(XSConstraints);
	if (loc != nullptr) {
		$init($XSMessageFormatter);
		$nc(errorReporter)->reportError(static_cast<$XMLLocator*>(loc), $XSMessageFormatter::SCHEMA_DOMAIN, key, args, $XMLErrorReporter::SEVERITY_ERROR);
	} else {
		$init($XSMessageFormatter);
		$nc(errorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, key, args, $XMLErrorReporter::SEVERITY_ERROR);
	}
}

void XSConstraints::fullSchemaChecking($XSGrammarBucket* grammarBucket, $SubstitutionGroupHandler* SGHandler, $CMBuilder* cmBuilder, $XMLErrorReporter* errorReporter) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammarArray, grammars, $nc(grammarBucket)->getGrammars());
	for (int32_t i = $nc(grammars)->length - 1; i >= 0; --i) {
		$nc(SGHandler)->addSubstitutionGroup($($nc(grammars->get(i))->getSubstitutionGroups()));
	}
	$var($XSParticleDecl, fakeDerived, $new($XSParticleDecl));
	$var($XSParticleDecl, fakeBase, $new($XSParticleDecl));
	fakeDerived->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
	fakeBase->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
	for (int32_t g = grammars->length - 1; g >= 0; --g) {
		$var($XSGroupDeclArray, redefinedGroups, $nc(grammars->get(g))->getRedefinedGroupDecls());
		$var($SimpleLocatorArray, rgLocators, $nc(grammars->get(g))->getRGLocators());
		for (int32_t i = 0; i < $nc(redefinedGroups)->length;) {
			$var($XSGroupDecl, derivedGrp, redefinedGroups->get(i++));
			$var($XSModelGroupImpl, derivedMG, $nc(derivedGrp)->fModelGroup);
			$var($XSGroupDecl, baseGrp, redefinedGroups->get(i++));
			$var($XSModelGroupImpl, baseMG, $nc(baseGrp)->fModelGroup);
			$set(fakeDerived, fValue, derivedMG);
			$set(fakeBase, fValue, baseMG);
			if (baseMG == nullptr) {
				if (derivedMG != nullptr) {
					reportSchemaError(errorReporter, $nc(rgLocators)->get(i / 2 - 1), "src-redefine.6.2.2"_s, $$new($ObjectArray, {
						$of(derivedGrp->fName),
						$of("rcase-Recurse.2"_s)
					}));
				}
			} else if (derivedMG == nullptr) {
				if (!fakeBase->emptiable()) {
					reportSchemaError(errorReporter, $nc(rgLocators)->get(i / 2 - 1), "src-redefine.6.2.2"_s, $$new($ObjectArray, {
						$of(derivedGrp->fName),
						$of("rcase-Recurse.2"_s)
					}));
				}
			} else {
				try {
					particleValidRestriction(fakeDerived, SGHandler, fakeBase, SGHandler);
				} catch ($XMLSchemaException& e) {
					$var($String, key, e->getKey());
					reportSchemaError(errorReporter, $nc(rgLocators)->get(i / 2 - 1), key, $(e->getArgs()));
					reportSchemaError(errorReporter, $nc(rgLocators)->get(i / 2 - 1), "src-redefine.6.2.2"_s, $$new($ObjectArray, {
						$of(derivedGrp->fName),
						$of(key)
					}));
				}
			}
		}
	}
	$var($XSComplexTypeDeclArray, types, nullptr);
	$var($SimpleLocatorArray, ctLocators, nullptr);
	bool further = false;
	bool fullChecked = false;
	int32_t keepType = 0;
	$var($SymbolHash, elemTable, $new($SymbolHash));
	{
		int32_t i = grammars->length - 1;
		int32_t j = 0;
		for (; i >= 0; --i) {
			keepType = 0;
			fullChecked = $nc(grammars->get(i))->fFullChecked;
			$assign(types, $nc(grammars->get(i))->getUncheckedComplexTypeDecls());
			$assign(ctLocators, $nc(grammars->get(i))->getUncheckedCTLocators());
			for (j = 0; j < $nc(types)->length; ++j) {
				if (!fullChecked) {
					if ($nc(types->get(j))->fParticle != nullptr) {
						elemTable->clear();
						try {
							checkElementDeclsConsistent(types->get(j), $nc(types->get(j))->fParticle, elemTable, SGHandler);
						} catch ($XMLSchemaException& e) {
							$var($XMLErrorReporter, var$0, errorReporter);
							$var($SimpleLocator, var$1, $nc(ctLocators)->get(j));
							$var($String, var$2, e->getKey());
							reportSchemaError(var$0, var$1, var$2, $(e->getArgs()));
						}
					}
				}
				if ($nc(types->get(j))->fBaseType != nullptr && !$equals($nc(types->get(j))->fBaseType, $SchemaGrammar::fAnyType) && $nc(types->get(j))->fDerivedBy == $XSConstants::DERIVATION_RESTRICTION && ($instanceOf($XSComplexTypeDecl, $nc(types->get(j))->fBaseType))) {
					$var($XSParticleDecl, derivedParticle, $nc(types->get(j))->fParticle);
					$var($XSParticleDecl, baseParticle, $nc((($cast($XSComplexTypeDecl, $nc(types->get(j))->fBaseType))))->fParticle);
					if (derivedParticle == nullptr) {
						if (baseParticle != nullptr && !baseParticle->emptiable()) {
							reportSchemaError(errorReporter, $nc(ctLocators)->get(j), "derivation-ok-restriction.5.3.2"_s, $$new($ObjectArray, {
								$of($nc(types->get(j))->fName),
								$($of($nc($nc(types->get(j))->fBaseType)->getName()))
							}));
						}
					} else if (baseParticle != nullptr) {
						try {
							particleValidRestriction($nc(types->get(j))->fParticle, SGHandler, $nc((($cast($XSComplexTypeDecl, $nc(types->get(j))->fBaseType))))->fParticle, SGHandler);
						} catch ($XMLSchemaException& e) {
							$var($XMLErrorReporter, var$3, errorReporter);
							$var($SimpleLocator, var$4, $nc(ctLocators)->get(j));
							$var($String, var$5, e->getKey());
							reportSchemaError(var$3, var$4, var$5, $(e->getArgs()));
							reportSchemaError(errorReporter, $nc(ctLocators)->get(j), "derivation-ok-restriction.5.4.2"_s, $$new($ObjectArray, {$of($nc(types->get(j))->fName)}));
						}
					} else {
						reportSchemaError(errorReporter, $nc(ctLocators)->get(j), "derivation-ok-restriction.5.4.2"_s, $$new($ObjectArray, {$of($nc(types->get(j))->fName)}));
					}
				}
				$var($XSCMValidator, cm, $nc(types->get(j))->getContentModel(cmBuilder, true));
				further = false;
				if (cm != nullptr) {
					try {
						further = cm->checkUniqueParticleAttribution(SGHandler);
					} catch ($XMLSchemaException& e) {
						$var($XMLErrorReporter, var$6, errorReporter);
						$var($SimpleLocator, var$7, $nc(ctLocators)->get(j));
						$var($String, var$8, e->getKey());
						reportSchemaError(var$6, var$7, var$8, $(e->getArgs()));
					}
				}
				if (!fullChecked && further) {
					types->set(keepType++, types->get(j));
				}
			}
			if (!fullChecked) {
				$nc(grammars->get(i))->setUncheckedTypeNum(keepType);
				$nc(grammars->get(i))->fFullChecked = true;
			}
		}
	}
}

void XSConstraints::checkElementDeclsConsistent($XSComplexTypeDecl* type, $XSParticleDecl* particle, $SymbolHash* elemDeclHash, $SubstitutionGroupHandler* sgHandler) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	int32_t pType = $nc(particle)->fType;
	if (pType == $XSParticleDecl::PARTICLE_WILDCARD) {
		return;
	}
	if (pType == $XSParticleDecl::PARTICLE_ELEMENT) {
		$var($XSElementDecl, elem, ($cast($XSElementDecl, particle->fValue)));
		findElemInTable(type, elem, elemDeclHash);
		if ($nc(elem)->fScope == $XSConstants::SCOPE_GLOBAL) {
			$var($XSElementDeclArray, subGroup, $nc(sgHandler)->getSubstitutionGroup(elem));
			for (int32_t i = 0; i < $nc(subGroup)->length; ++i) {
				findElemInTable(type, subGroup->get(i), elemDeclHash);
			}
		}
		return;
	}
	$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, particle->fValue));
	for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
		checkElementDeclsConsistent(type, $nc(group->fParticles)->get(i), elemDeclHash, sgHandler);
	}
}

void XSConstraints::findElemInTable($XSComplexTypeDecl* type, $XSElementDecl* elem, $SymbolHash* elemDeclHash) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	$var($String, name, $str({$nc(elem)->fName, ","_s, elem->fTargetNamespace}));
	$var($XSElementDecl, existingElem, nullptr);
	if (($assign(existingElem, ($cast($XSElementDecl, $nc(elemDeclHash)->get(name))))) == nullptr) {
		elemDeclHash->put(name, elem);
	} else {
		if (elem == existingElem) {
			return;
		}
		if (elem->fType != $nc(existingElem)->fType) {
			$throwNew($XMLSchemaException, "cos-element-consistent"_s, $$new($ObjectArray, {
				$of($nc(type)->fName),
				$of(elem->fName)
			}));
		}
	}
}

bool XSConstraints::particleValidRestriction($XSParticleDecl* dParticle, $SubstitutionGroupHandler* dSGHandler, $XSParticleDecl* bParticle, $SubstitutionGroupHandler* bSGHandler) {
	$init(XSConstraints);
	return particleValidRestriction(dParticle, dSGHandler, bParticle, bSGHandler, true);
}

bool XSConstraints::particleValidRestriction($XSParticleDecl* dParticle$renamed, $SubstitutionGroupHandler* dSGHandler$renamed, $XSParticleDecl* bParticle$renamed, $SubstitutionGroupHandler* bSGHandler$renamed, bool checkWCOccurrence) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	$var($SubstitutionGroupHandler, bSGHandler, bSGHandler$renamed);
	$var($XSParticleDecl, bParticle, bParticle$renamed);
	$var($SubstitutionGroupHandler, dSGHandler, dSGHandler$renamed);
	$var($XSParticleDecl, dParticle, dParticle$renamed);
	$var($List, dChildren, nullptr);
	$var($List, bChildren, nullptr);
	int32_t dMinEffectiveTotalRange = XSConstraints::OCCURRENCE_UNKNOWN;
	int32_t dMaxEffectiveTotalRange = XSConstraints::OCCURRENCE_UNKNOWN;
	bool bExpansionHappened = false;
	bool var$0 = $nc(dParticle)->isEmpty();
	if (var$0 && !$nc(bParticle)->emptiable()) {
		$throwNew($XMLSchemaException, "cos-particle-restrict.a"_s, nullptr);
	} else {
		bool var$2 = !dParticle->isEmpty();
		if (var$2 && bParticle->isEmpty()) {
			$throwNew($XMLSchemaException, "cos-particle-restrict.b"_s, nullptr);
		}
	}
	int16_t dType = $nc(dParticle)->fType;
	if (dType == $XSParticleDecl::PARTICLE_MODELGROUP) {
		dType = $nc(($cast($XSModelGroupImpl, dParticle->fValue)))->fCompositor;
		$var($XSParticleDecl, dtmp, getNonUnaryGroup(dParticle));
		if (dtmp != dParticle) {
			$assign(dParticle, dtmp);
			dType = $nc(dParticle)->fType;
			if (dType == $XSParticleDecl::PARTICLE_MODELGROUP) {
				dType = $nc(($cast($XSModelGroupImpl, dParticle->fValue)))->fCompositor;
			}
		}
		$assign(dChildren, removePointlessChildren(dParticle));
	}
	int32_t dMinOccurs = dParticle->fMinOccurs;
	int32_t dMaxOccurs = dParticle->fMaxOccurs;
	if (dSGHandler != nullptr && dType == $XSParticleDecl::PARTICLE_ELEMENT) {
		$var($XSElementDecl, dElement, $cast($XSElementDecl, dParticle->fValue));
		if ($nc(dElement)->fScope == $XSConstants::SCOPE_GLOBAL) {
			$var($XSElementDeclArray, subGroup, dSGHandler->getSubstitutionGroup(dElement));
			if ($nc(subGroup)->length > 0) {
				dType = $XSModelGroupImpl::MODELGROUP_CHOICE;
				dMinEffectiveTotalRange = dMinOccurs;
				dMaxEffectiveTotalRange = dMaxOccurs;
				$assign(dChildren, $new($ArrayList, subGroup->length + 1));
				for (int32_t i = 0; i < subGroup->length; ++i) {
					addElementToParticleVector(dChildren, subGroup->get(i));
				}
				addElementToParticleVector(dChildren, dElement);
				$Collections::sort(dChildren, XSConstraints::ELEMENT_PARTICLE_COMPARATOR);
				$assign(dSGHandler, nullptr);
			}
		}
	}
	int16_t bType = $nc(bParticle)->fType;
	if (bType == $XSParticleDecl::PARTICLE_MODELGROUP) {
		bType = $nc(($cast($XSModelGroupImpl, bParticle->fValue)))->fCompositor;
		$var($XSParticleDecl, btmp, getNonUnaryGroup(bParticle));
		if (btmp != bParticle) {
			$assign(bParticle, btmp);
			bType = $nc(bParticle)->fType;
			if (bType == $XSParticleDecl::PARTICLE_MODELGROUP) {
				bType = $nc(($cast($XSModelGroupImpl, bParticle->fValue)))->fCompositor;
			}
		}
		$assign(bChildren, removePointlessChildren(bParticle));
	}
	int32_t bMinOccurs = bParticle->fMinOccurs;
	int32_t bMaxOccurs = bParticle->fMaxOccurs;
	if (bSGHandler != nullptr && bType == $XSParticleDecl::PARTICLE_ELEMENT) {
		$var($XSElementDecl, bElement, $cast($XSElementDecl, bParticle->fValue));
		if ($nc(bElement)->fScope == $XSConstants::SCOPE_GLOBAL) {
			$var($XSElementDeclArray, bsubGroup, bSGHandler->getSubstitutionGroup(bElement));
			if ($nc(bsubGroup)->length > 0) {
				bType = $XSModelGroupImpl::MODELGROUP_CHOICE;
				$assign(bChildren, $new($ArrayList, bsubGroup->length + 1));
				for (int32_t i = 0; i < bsubGroup->length; ++i) {
					addElementToParticleVector(bChildren, bsubGroup->get(i));
				}
				addElementToParticleVector(bChildren, bElement);
				$Collections::sort(bChildren, XSConstraints::ELEMENT_PARTICLE_COMPARATOR);
				$assign(bSGHandler, nullptr);
				bExpansionHappened = true;
			}
		}
	}
	switch (dType) {
	case $XSParticleDecl::PARTICLE_ELEMENT:
		{
			{
				switch (bType) {
				case $XSParticleDecl::PARTICLE_ELEMENT:
					{
						{
							checkNameAndTypeOK($cast($XSElementDecl, dParticle->fValue), dMinOccurs, dMaxOccurs, $cast($XSElementDecl, bParticle->fValue), bMinOccurs, bMaxOccurs);
							return bExpansionHappened;
						}
					}
				case $XSParticleDecl::PARTICLE_WILDCARD:
					{
						{
							checkNSCompat($cast($XSElementDecl, dParticle->fValue), dMinOccurs, dMaxOccurs, $cast($XSWildcardDecl, bParticle->fValue), bMinOccurs, bMaxOccurs, checkWCOccurrence);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_CHOICE:
					{
						{
							$assign(dChildren, $new($ArrayList));
							dChildren->add(dParticle);
							checkRecurseLax(dChildren, 1, 1, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
					{}
				case $XSModelGroupImpl::MODELGROUP_ALL:
					{
						{
							$assign(dChildren, $new($ArrayList));
							dChildren->add(dParticle);
							checkRecurse(dChildren, 1, 1, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				default:
					{
						{
							$throwNew($XMLSchemaException, "Internal-Error"_s, $$new($ObjectArray, {$of("in particleValidRestriction"_s)}));
						}
					}
				}
			}
		}
	case $XSParticleDecl::PARTICLE_WILDCARD:
		{
			{
				switch (bType) {
				case $XSParticleDecl::PARTICLE_WILDCARD:
					{
						{
							checkNSSubset($cast($XSWildcardDecl, dParticle->fValue), dMinOccurs, dMaxOccurs, $cast($XSWildcardDecl, bParticle->fValue), bMinOccurs, bMaxOccurs);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_CHOICE:
					{}
				case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
					{}
				case $XSModelGroupImpl::MODELGROUP_ALL:
					{}
				case $XSParticleDecl::PARTICLE_ELEMENT:
					{
						{
							$throwNew($XMLSchemaException, "cos-particle-restrict.2"_s, $$new($ObjectArray, {$of("any:choice,sequence,all,elt"_s)}));
						}
					}
				default:
					{
						{
							$throwNew($XMLSchemaException, "Internal-Error"_s, $$new($ObjectArray, {$of("in particleValidRestriction"_s)}));
						}
					}
				}
			}
		}
	case $XSModelGroupImpl::MODELGROUP_ALL:
		{
			{
				switch (bType) {
				case $XSParticleDecl::PARTICLE_WILDCARD:
					{
						{
							if (dMinEffectiveTotalRange == XSConstraints::OCCURRENCE_UNKNOWN) {
								dMinEffectiveTotalRange = dParticle->minEffectiveTotalRange();
							}
							if (dMaxEffectiveTotalRange == XSConstraints::OCCURRENCE_UNKNOWN) {
								dMaxEffectiveTotalRange = dParticle->maxEffectiveTotalRange();
							}
							checkNSRecurseCheckCardinality(dChildren, dMinEffectiveTotalRange, dMaxEffectiveTotalRange, dSGHandler, bParticle, bMinOccurs, bMaxOccurs, checkWCOccurrence);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_ALL:
					{
						{
							checkRecurse(dChildren, dMinOccurs, dMaxOccurs, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_CHOICE:
					{}
				case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
					{}
				case $XSParticleDecl::PARTICLE_ELEMENT:
					{
						{
							$throwNew($XMLSchemaException, "cos-particle-restrict.2"_s, $$new($ObjectArray, {$of("all:choice,sequence,elt"_s)}));
						}
					}
				default:
					{
						{
							$throwNew($XMLSchemaException, "Internal-Error"_s, $$new($ObjectArray, {$of("in particleValidRestriction"_s)}));
						}
					}
				}
			}
		}
	case $XSModelGroupImpl::MODELGROUP_CHOICE:
		{
			{
				switch (bType) {
				case $XSParticleDecl::PARTICLE_WILDCARD:
					{
						{
							if (dMinEffectiveTotalRange == XSConstraints::OCCURRENCE_UNKNOWN) {
								dMinEffectiveTotalRange = dParticle->minEffectiveTotalRange();
							}
							if (dMaxEffectiveTotalRange == XSConstraints::OCCURRENCE_UNKNOWN) {
								dMaxEffectiveTotalRange = dParticle->maxEffectiveTotalRange();
							}
							checkNSRecurseCheckCardinality(dChildren, dMinEffectiveTotalRange, dMaxEffectiveTotalRange, dSGHandler, bParticle, bMinOccurs, bMaxOccurs, checkWCOccurrence);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_CHOICE:
					{
						{
							checkRecurseLax(dChildren, dMinOccurs, dMaxOccurs, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_ALL:
					{}
				case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
					{}
				case $XSParticleDecl::PARTICLE_ELEMENT:
					{
						{
							$throwNew($XMLSchemaException, "cos-particle-restrict.2"_s, $$new($ObjectArray, {$of("choice:all,sequence,elt"_s)}));
						}
					}
				default:
					{
						{
							$throwNew($XMLSchemaException, "Internal-Error"_s, $$new($ObjectArray, {$of("in particleValidRestriction"_s)}));
						}
					}
				}
			}
		}
	case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
		{
			{
				switch (bType) {
				case $XSParticleDecl::PARTICLE_WILDCARD:
					{
						{
							if (dMinEffectiveTotalRange == XSConstraints::OCCURRENCE_UNKNOWN) {
								dMinEffectiveTotalRange = dParticle->minEffectiveTotalRange();
							}
							if (dMaxEffectiveTotalRange == XSConstraints::OCCURRENCE_UNKNOWN) {
								dMaxEffectiveTotalRange = dParticle->maxEffectiveTotalRange();
							}
							checkNSRecurseCheckCardinality(dChildren, dMinEffectiveTotalRange, dMaxEffectiveTotalRange, dSGHandler, bParticle, bMinOccurs, bMaxOccurs, checkWCOccurrence);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_ALL:
					{
						{
							checkRecurseUnordered(dChildren, dMinOccurs, dMaxOccurs, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
					{
						{
							checkRecurse(dChildren, dMinOccurs, dMaxOccurs, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				case $XSModelGroupImpl::MODELGROUP_CHOICE:
					{
						{
							int32_t min1 = dMinOccurs * $nc(dChildren)->size();
							int32_t max1 = (dMaxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) ? dMaxOccurs : dMaxOccurs * dChildren->size();
							checkMapAndSum(dChildren, min1, max1, dSGHandler, bChildren, bMinOccurs, bMaxOccurs, bSGHandler);
							return bExpansionHappened;
						}
					}
				case $XSParticleDecl::PARTICLE_ELEMENT:
					{
						{
							$throwNew($XMLSchemaException, "cos-particle-restrict.2"_s, $$new($ObjectArray, {$of("seq:elt"_s)}));
						}
					}
				default:
					{
						{
							$throwNew($XMLSchemaException, "Internal-Error"_s, $$new($ObjectArray, {$of("in particleValidRestriction"_s)}));
						}
					}
				}
			}
		}
	}
	return bExpansionHappened;
}

void XSConstraints::addElementToParticleVector($List* v, $XSElementDecl* d) {
	$init(XSConstraints);
	$var($XSParticleDecl, p, $new($XSParticleDecl));
	$set(p, fValue, d);
	p->fType = $XSParticleDecl::PARTICLE_ELEMENT;
	$nc(v)->add(p);
}

$XSParticleDecl* XSConstraints::getNonUnaryGroup($XSParticleDecl* p) {
	$init(XSConstraints);
	if ($nc(p)->fType == $XSParticleDecl::PARTICLE_ELEMENT || $nc(p)->fType == $XSParticleDecl::PARTICLE_WILDCARD) {
		return p;
	}
	if ($nc(p)->fMinOccurs == 1 && p->fMaxOccurs == 1 && p->fValue != nullptr && $nc(($cast($XSModelGroupImpl, p->fValue)))->fParticleCount == 1) {
		return getNonUnaryGroup($nc($nc(($cast($XSModelGroupImpl, p->fValue)))->fParticles)->get(0));
	} else {
		return p;
	}
}

$List* XSConstraints::removePointlessChildren($XSParticleDecl* p) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if ($nc(p)->fType == $XSParticleDecl::PARTICLE_ELEMENT || $nc(p)->fType == $XSParticleDecl::PARTICLE_WILDCARD) {
		return nullptr;
	}
	$var($List, children, $new($ArrayList));
	$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, $nc(p)->fValue));
	for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
		gatherChildren(group->fCompositor, $nc(group->fParticles)->get(i), children);
	}
	return children;
}

void XSConstraints::gatherChildren(int32_t parentType, $XSParticleDecl* p, $List* children) {
	$init(XSConstraints);
	int32_t min = $nc(p)->fMinOccurs;
	int32_t max = p->fMaxOccurs;
	int32_t type = p->fType;
	if (type == $XSParticleDecl::PARTICLE_MODELGROUP) {
		type = $nc(($cast($XSModelGroupImpl, p->fValue)))->fCompositor;
	}
	if (type == $XSParticleDecl::PARTICLE_ELEMENT || type == $XSParticleDecl::PARTICLE_WILDCARD) {
		$nc(children)->add(p);
		return;
	}
	if (!(min == 1 && max == 1)) {
		$nc(children)->add(p);
	} else if (parentType == type) {
		$var($XSModelGroupImpl, group, $cast($XSModelGroupImpl, p->fValue));
		for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
			gatherChildren(type, $nc(group->fParticles)->get(i), children);
		}
	} else if (!p->isEmpty()) {
		$nc(children)->add(p);
	}
}

void XSConstraints::checkNameAndTypeOK($XSElementDecl* dElement, int32_t dMin, int32_t dMax, $XSElementDecl* bElement, int32_t bMin, int32_t bMax) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if ($nc(dElement)->fName != $nc(bElement)->fName || $nc(dElement)->fTargetNamespace != $nc(bElement)->fTargetNamespace) {
		$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.1"_s, $$new($ObjectArray, {
			$of(dElement->fName),
			$of(dElement->fTargetNamespace),
			$of(bElement->fName),
			$of(bElement->fTargetNamespace)
		}));
	}
	bool var$0 = !$nc(bElement)->getNillable();
	if (var$0 && $nc(dElement)->getNillable()) {
		$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.2"_s, $$new($ObjectArray, {$of(dElement->fName)}));
	}
	if (!checkOccurrenceRange(dMin, dMax, bMin, bMax)) {
		$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.3"_s, $$new($ObjectArray, {
			$of($nc(dElement)->fName),
			$($of($Integer::toString(dMin))),
			dMax == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(dMax))),
			$($of($Integer::toString(bMin))),
			bMax == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(bMax)))
		}));
	}
	if ($nc(bElement)->getConstraintType() == $XSConstants::VC_FIXED) {
		if ($nc(dElement)->getConstraintType() != $XSConstants::VC_FIXED) {
			$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.4.a"_s, $$new($ObjectArray, {
				$of(dElement->fName),
				$($of($nc(bElement->fDefault)->stringValue()))
			}));
		}
		bool isSimple = false;
		if ($nc($nc(dElement)->fType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE || $nc(($cast($XSComplexTypeDecl, $nc(dElement)->fType)))->fContentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE) {
			isSimple = true;
		}
		bool var$1 = !isSimple && !$nc($nc(bElement->fDefault)->normalizedValue)->equals($nc($nc(dElement)->fDefault)->normalizedValue);
		if (var$1 || isSimple && !$nc($of($nc(bElement->fDefault)->actualValue))->equals($nc($nc(dElement)->fDefault)->actualValue)) {
			$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.4.b"_s, $$new($ObjectArray, {
				$of($nc(dElement)->fName),
				$($of($nc(dElement->fDefault)->stringValue())),
				$($of($nc(bElement->fDefault)->stringValue()))
			}));
		}
	}
	checkIDConstraintRestriction(dElement, bElement);
	int32_t blockSet1 = $nc(dElement)->fBlock;
	int32_t blockSet2 = $nc(bElement)->fBlock;
	if ((((int32_t)(blockSet1 & (uint32_t)blockSet2)) != blockSet2) || (blockSet1 == $XSConstants::DERIVATION_NONE && blockSet2 != $XSConstants::DERIVATION_NONE)) {
		$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.6"_s, $$new($ObjectArray, {$of(dElement->fName)}));
	}
	if (!checkTypeDerivationOk(dElement->fType, bElement->fType, (int16_t)(($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_LIST) | $XSConstants::DERIVATION_UNION))) {
		$throwNew($XMLSchemaException, "rcase-NameAndTypeOK.7"_s, $$new($ObjectArray, {
			$of(dElement->fName),
			$($of($nc(dElement->fType)->getName())),
			$($of($nc(bElement->fType)->getName()))
		}));
	}
}

void XSConstraints::checkIDConstraintRestriction($XSElementDecl* derivedElemDecl, $XSElementDecl* baseElemDecl) {
	$init(XSConstraints);
}

bool XSConstraints::checkOccurrenceRange(int32_t min1, int32_t max1, int32_t min2, int32_t max2) {
	$init(XSConstraints);
	if ((min1 >= min2) && ((max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED) || (max1 != $SchemaSymbols::OCCURRENCE_UNBOUNDED && max1 <= max2))) {
		return true;
	} else {
		return false;
	}
}

void XSConstraints::checkNSCompat($XSElementDecl* elem, int32_t min1, int32_t max1, $XSWildcardDecl* wildcard, int32_t min2, int32_t max2, bool checkWCOccurrence) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (checkWCOccurrence && !checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-NSCompat.2"_s, $$new($ObjectArray, {
			$of($nc(elem)->fName),
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	if (!$nc(wildcard)->allowNamespace($nc(elem)->fTargetNamespace)) {
		$throwNew($XMLSchemaException, "rcase-NSCompat.1"_s, $$new($ObjectArray, {
			$of($nc(elem)->fName),
			$of(elem->fTargetNamespace)
		}));
	}
}

void XSConstraints::checkNSSubset($XSWildcardDecl* dWildcard, int32_t min1, int32_t max1, $XSWildcardDecl* bWildcard, int32_t min2, int32_t max2) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (!checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-NSSubset.2"_s, $$new($ObjectArray, {
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	if (!$nc(dWildcard)->isSubsetOf(bWildcard)) {
		$throwNew($XMLSchemaException, "rcase-NSSubset.1"_s, nullptr);
	}
	if ($nc(dWildcard)->weakerProcessContents(bWildcard)) {
		$throwNew($XMLSchemaException, "rcase-NSSubset.3"_s, $$new($ObjectArray, {
			$($of(dWildcard->getProcessContentsAsString())),
			$($of($nc(bWildcard)->getProcessContentsAsString()))
		}));
	}
}

void XSConstraints::checkNSRecurseCheckCardinality($List* children, int32_t min1, int32_t max1, $SubstitutionGroupHandler* dSGHandler, $XSParticleDecl* wildcard, int32_t min2, int32_t max2, bool checkWCOccurrence) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (checkWCOccurrence && !checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-NSRecurseCheckCardinality.2"_s, $$new($ObjectArray, {
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	int32_t count = $nc(children)->size();
	try {
		for (int32_t i = 0; i < count; ++i) {
			$var($XSParticleDecl, particle1, $cast($XSParticleDecl, children->get(i)));
			particleValidRestriction(particle1, dSGHandler, wildcard, nullptr, false);
		}
	} catch ($XMLSchemaException& e) {
		$throwNew($XMLSchemaException, "rcase-NSRecurseCheckCardinality.1"_s, nullptr);
	}
}

void XSConstraints::checkRecurse($List* dChildren, int32_t min1, int32_t max1, $SubstitutionGroupHandler* dSGHandler, $List* bChildren, int32_t min2, int32_t max2, $SubstitutionGroupHandler* bSGHandler) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (!checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-Recurse.1"_s, $$new($ObjectArray, {
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	int32_t count1 = $nc(dChildren)->size();
	int32_t count2 = $nc(bChildren)->size();
	int32_t current = 0;
	bool label$continue = false;
	for (int32_t i = 0; i < count1; ++i) {
		$var($XSParticleDecl, particle1, $cast($XSParticleDecl, dChildren->get(i)));
		for (int32_t j = current; j < count2; ++j) {
			$var($XSParticleDecl, particle2, $cast($XSParticleDecl, bChildren->get(j)));
			current += 1;
			try {
				particleValidRestriction(particle1, dSGHandler, particle2, bSGHandler);
				label$continue = true;
				break;
			} catch ($XMLSchemaException& e) {
				if (!$nc(particle2)->emptiable()) {
					$throwNew($XMLSchemaException, "rcase-Recurse.2"_s, nullptr);
				}
			}
		}
		if (label$continue) {
			label$continue = false;
			continue;
		}
		$throwNew($XMLSchemaException, "rcase-Recurse.2"_s, nullptr);
	}
	for (int32_t j = current; j < count2; ++j) {
		$var($XSParticleDecl, particle2, $cast($XSParticleDecl, bChildren->get(j)));
		if (!$nc(particle2)->emptiable()) {
			$throwNew($XMLSchemaException, "rcase-Recurse.2"_s, nullptr);
		}
	}
}

void XSConstraints::checkRecurseUnordered($List* dChildren, int32_t min1, int32_t max1, $SubstitutionGroupHandler* dSGHandler, $List* bChildren, int32_t min2, int32_t max2, $SubstitutionGroupHandler* bSGHandler) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (!checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-RecurseUnordered.1"_s, $$new($ObjectArray, {
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	int32_t count1 = $nc(dChildren)->size();
	int32_t count2 = $nc(bChildren)->size();
	$var($booleans, foundIt, $new($booleans, count2));
	bool label$continue = false;
	for (int32_t i = 0; i < count1; ++i) {
		$var($XSParticleDecl, particle1, $cast($XSParticleDecl, dChildren->get(i)));
		for (int32_t j = 0; j < count2; ++j) {
			$var($XSParticleDecl, particle2, $cast($XSParticleDecl, bChildren->get(j)));
			try {
				particleValidRestriction(particle1, dSGHandler, particle2, bSGHandler);
				if (foundIt->get(j)) {
					$throwNew($XMLSchemaException, "rcase-RecurseUnordered.2"_s, nullptr);
				} else {
					foundIt->set(j, true);
				}
				label$continue = true;
				break;
			} catch ($XMLSchemaException& e) {
			}
		}
		if (label$continue) {
			label$continue = false;
			continue;
		}
		$throwNew($XMLSchemaException, "rcase-RecurseUnordered.2"_s, nullptr);
	}
	for (int32_t j = 0; j < count2; ++j) {
		$var($XSParticleDecl, particle2, $cast($XSParticleDecl, bChildren->get(j)));
		if (!foundIt->get(j) && !$nc(particle2)->emptiable()) {
			$throwNew($XMLSchemaException, "rcase-RecurseUnordered.2"_s, nullptr);
		}
	}
}

void XSConstraints::checkRecurseLax($List* dChildren, int32_t min1, int32_t max1, $SubstitutionGroupHandler* dSGHandler, $List* bChildren, int32_t min2, int32_t max2, $SubstitutionGroupHandler* bSGHandler) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (!checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-RecurseLax.1"_s, $$new($ObjectArray, {
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	int32_t count1 = $nc(dChildren)->size();
	int32_t count2 = $nc(bChildren)->size();
	int32_t current = 0;
	bool label$continue = false;
	for (int32_t i = 0; i < count1; ++i) {
		$var($XSParticleDecl, particle1, $cast($XSParticleDecl, dChildren->get(i)));
		for (int32_t j = current; j < count2; ++j) {
			$var($XSParticleDecl, particle2, $cast($XSParticleDecl, bChildren->get(j)));
			current += 1;
			try {
				if (particleValidRestriction(particle1, dSGHandler, particle2, bSGHandler)) {
					--current;
				}
				label$continue = true;
				break;
			} catch ($XMLSchemaException& e) {
			}
		}
		if (label$continue) {
			label$continue = false;
			continue;
		}
		$throwNew($XMLSchemaException, "rcase-RecurseLax.2"_s, nullptr);
	}
}

void XSConstraints::checkMapAndSum($List* dChildren, int32_t min1, int32_t max1, $SubstitutionGroupHandler* dSGHandler, $List* bChildren, int32_t min2, int32_t max2, $SubstitutionGroupHandler* bSGHandler) {
	$init(XSConstraints);
	$useLocalCurrentObjectStackCache();
	if (!checkOccurrenceRange(min1, max1, min2, max2)) {
		$throwNew($XMLSchemaException, "rcase-MapAndSum.2"_s, $$new($ObjectArray, {
			$($of($Integer::toString(min1))),
			max1 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max1))),
			$($of($Integer::toString(min2))),
			max2 == $SchemaSymbols::OCCURRENCE_UNBOUNDED ? $of("unbounded"_s) : $($of($Integer::toString(max2)))
		}));
	}
	int32_t count1 = $nc(dChildren)->size();
	int32_t count2 = $nc(bChildren)->size();
	bool label$continue = false;
	for (int32_t i = 0; i < count1; ++i) {
		$var($XSParticleDecl, particle1, $cast($XSParticleDecl, dChildren->get(i)));
		for (int32_t j = 0; j < count2; ++j) {
			$var($XSParticleDecl, particle2, $cast($XSParticleDecl, bChildren->get(j)));
			try {
				particleValidRestriction(particle1, dSGHandler, particle2, bSGHandler);
				label$continue = true;
				break;
			} catch ($XMLSchemaException& e) {
			}
		}
		if (label$continue) {
			label$continue = false;
			continue;
		}
		$throwNew($XMLSchemaException, "rcase-MapAndSum.1"_s, nullptr);
	}
}

bool XSConstraints::overlapUPA($XSElementDecl* element1, $XSElementDecl* element2, $SubstitutionGroupHandler* sgHandler) {
	$init(XSConstraints);
	if ($nc(element1)->fName == $nc(element2)->fName && element1->fTargetNamespace == element2->fTargetNamespace) {
		return true;
	}
	$var($XSElementDeclArray, subGroup, $nc(sgHandler)->getSubstitutionGroup(element1));
	for (int32_t i = $nc(subGroup)->length - 1; i >= 0; --i) {
		if ($nc(subGroup->get(i))->fName == $nc(element2)->fName && $nc(subGroup->get(i))->fTargetNamespace == element2->fTargetNamespace) {
			return true;
		}
	}
	$assign(subGroup, sgHandler->getSubstitutionGroup(element2));
	for (int32_t i = subGroup->length - 1; i >= 0; --i) {
		if ($nc(subGroup->get(i))->fName == $nc(element1)->fName && $nc(subGroup->get(i))->fTargetNamespace == element1->fTargetNamespace) {
			return true;
		}
	}
	return false;
}

bool XSConstraints::overlapUPA($XSElementDecl* element, $XSWildcardDecl* wildcard, $SubstitutionGroupHandler* sgHandler) {
	$init(XSConstraints);
	if ($nc(wildcard)->allowNamespace($nc(element)->fTargetNamespace)) {
		return true;
	}
	$var($XSElementDeclArray, subGroup, $nc(sgHandler)->getSubstitutionGroup(element));
	for (int32_t i = $nc(subGroup)->length - 1; i >= 0; --i) {
		if ($nc(wildcard)->allowNamespace($nc(subGroup->get(i))->fTargetNamespace)) {
			return true;
		}
	}
	return false;
}

bool XSConstraints::overlapUPA($XSWildcardDecl* wildcard1, $XSWildcardDecl* wildcard2) {
	$init(XSConstraints);
	$var($XSWildcardDecl, intersect, $nc(wildcard1)->performIntersectionWith(wildcard2, wildcard1->fProcessContents));
	if (intersect == nullptr || $nc(intersect)->fType != $XSWildcardDecl::NSCONSTRAINT_LIST || $nc($nc(intersect)->fNamespaceList)->length != 0) {
		return true;
	}
	return false;
}

bool XSConstraints::overlapUPA(Object$* decl1, Object$* decl2, $SubstitutionGroupHandler* sgHandler) {
	$init(XSConstraints);
	if ($instanceOf($XSElementDecl, decl1)) {
		if ($instanceOf($XSElementDecl, decl2)) {
			return overlapUPA($cast($XSElementDecl, decl1), $cast($XSElementDecl, decl2), sgHandler);
		} else {
			return overlapUPA($cast($XSElementDecl, decl1), $cast($XSWildcardDecl, decl2), sgHandler);
		}
	} else if ($instanceOf($XSElementDecl, decl2)) {
		return overlapUPA($cast($XSElementDecl, decl2), $cast($XSWildcardDecl, decl1), sgHandler);
	} else {
		return overlapUPA($cast($XSWildcardDecl, decl1), $cast($XSWildcardDecl, decl2));
	}
}

void clinit$XSConstraints($Class* class$) {
	$init($SchemaGrammar);
	$init($SchemaSymbols);
	$assignStatic(XSConstraints::STRING_TYPE, $cast($XSSimpleType, $nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl($SchemaSymbols::ATTVAL_STRING)));
	$assignStatic(XSConstraints::fEmptyParticle, nullptr);
	$assignStatic(XSConstraints::ELEMENT_PARTICLE_COMPARATOR, $new($XSConstraints$1));
}

XSConstraints::XSConstraints() {
}

$Class* XSConstraints::load$($String* name, bool initialize) {
	$loadClass(XSConstraints, name, initialize, &_XSConstraints_ClassInfo_, clinit$XSConstraints, allocate$XSConstraints);
	return class$;
}

$Class* XSConstraints::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com