#include <com/sun/org/apache/xerces/internal/impl/dv/xs/FullDVFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef DOUBLE
#undef DOUBLE_DT
#undef DURATION
#undef DURATION_DT
#undef DV_DOUBLE
#undef DV_DURATION
#undef DV_ENTITY
#undef DV_FLOAT
#undef DV_HEXBINARY
#undef DV_ID
#undef DV_IDREF
#undef DV_NOTATION
#undef DV_QNAME
#undef ENTITIES
#undef ENTITY
#undef ENTITY_DT
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE
#undef FLOAT
#undef FLOAT_DT
#undef HEXBINARY
#undef HEXBINARY_DT
#undef ID
#undef IDREF
#undef IDREFS
#undef IDREF_DT
#undef ID_DT
#undef LANGUAGE
#undef LANGUAGE_DT
#undef NAME
#undef NAME_DT
#undef NCNAME
#undef NCNAME_DT
#undef NMTOKEN
#undef NMTOKENS
#undef NMTOKEN_DT
#undef NORMALIZEDSTRING
#undef NORMALIZEDSTRING_DT
#undef NOTATION
#undef NOTATION_DT
#undef ORDERED_FALSE
#undef ORDERED_PARTIAL
#undef QNAME
#undef QNAME_DT
#undef SPECIAL_PATTERN_NAME
#undef SPECIAL_PATTERN_NCNAME
#undef SPECIAL_PATTERN_NMTOKEN
#undef STRING
#undef TOKEN
#undef TOKEN_DT
#undef URI_SCHEMAFORSCHEMA
#undef WS_COLLAPSE
#undef WS_REPLACE

using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $BaseDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseDVFactory;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _FullDVFactory_FieldInfo_[] = {
	{"URI_SCHEMAFORSCHEMA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(FullDVFactory, URI_SCHEMAFORSCHEMA)},
	{"fFullTypes", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $STATIC, $staticField(FullDVFactory, fFullTypes)},
	{}
};

$MethodInfo _FullDVFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FullDVFactory, init$, void)},
	{"createBuiltInTypes", "(Lcom/sun/org/apache/xerces/internal/util/SymbolHash;)V", nullptr, $STATIC, $staticMethod(FullDVFactory, createBuiltInTypes, void, $SymbolHash*)},
	{"getBuiltInType", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(FullDVFactory, getBuiltInType, $XSSimpleType*, $String*)},
	{"getBuiltInTypes", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PUBLIC, $virtualMethod(FullDVFactory, getBuiltInTypes, $SymbolHash*)},
	{}
};

$ClassInfo _FullDVFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.FullDVFactory",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.BaseDVFactory",
	nullptr,
	_FullDVFactory_FieldInfo_,
	_FullDVFactory_MethodInfo_
};

$Object* allocate$FullDVFactory($Class* clazz) {
	return $of($alloc(FullDVFactory));
}

$String* FullDVFactory::URI_SCHEMAFORSCHEMA = nullptr;
$SymbolHash* FullDVFactory::fFullTypes = nullptr;

void FullDVFactory::init$() {
	$BaseDVFactory::init$();
}

$XSSimpleType* FullDVFactory::getBuiltInType($String* name) {
	return $cast($XSSimpleType, $nc(FullDVFactory::fFullTypes)->get(name));
}

$SymbolHash* FullDVFactory::getBuiltInTypes() {
	return $nc(FullDVFactory::fFullTypes)->makeClone();
}

void FullDVFactory::createBuiltInTypes($SymbolHash* types) {
	$init(FullDVFactory);
	$useLocalCurrentObjectStackCache();
	$BaseDVFactory::createBuiltInTypes(types);
	$var($String, DOUBLE, "double"_s);
	$var($String, DURATION, "duration"_s);
	$var($String, ENTITY, "ENTITY"_s);
	$var($String, ENTITIES, "ENTITIES"_s);
	$var($String, FLOAT, "float"_s);
	$var($String, HEXBINARY, "hexBinary"_s);
	$var($String, ID, "ID"_s);
	$var($String, IDREF, "IDREF"_s);
	$var($String, IDREFS, "IDREFS"_s);
	$var($String, NAME, "Name"_s);
	$var($String, NCNAME, "NCName"_s);
	$var($String, NMTOKEN, "NMTOKEN"_s);
	$var($String, NMTOKENS, "NMTOKENS"_s);
	$var($String, LANGUAGE, "language"_s);
	$var($String, NORMALIZEDSTRING, "normalizedString"_s);
	$var($String, NOTATION, "NOTATION"_s);
	$var($String, QNAME, "QName"_s);
	$var($String, STRING, "string"_s);
	$var($String, TOKEN, "token"_s);
	$var($XSFacets, facets, $new($XSFacets));
	$init($XSSimpleTypeDecl);
	$var($XSSimpleTypeDecl, anySimpleType, $XSSimpleTypeDecl::fAnySimpleType);
	$var($XSSimpleTypeDecl, stringDV, $cast($XSSimpleTypeDecl, $nc(types)->get(STRING)));
	types->put(FLOAT, $$new($XSSimpleTypeDecl, anySimpleType, FLOAT, $XSSimpleTypeDecl::DV_FLOAT, $XSSimpleType::ORDERED_PARTIAL, true, true, true, true, $XSConstants::FLOAT_DT));
	types->put(DOUBLE, $$new($XSSimpleTypeDecl, anySimpleType, DOUBLE, $XSSimpleTypeDecl::DV_DOUBLE, $XSSimpleType::ORDERED_PARTIAL, true, true, true, true, $XSConstants::DOUBLE_DT));
	types->put(DURATION, $$new($XSSimpleTypeDecl, anySimpleType, DURATION, $XSSimpleTypeDecl::DV_DURATION, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSConstants::DURATION_DT));
	types->put(HEXBINARY, $$new($XSSimpleTypeDecl, anySimpleType, HEXBINARY, $XSSimpleTypeDecl::DV_HEXBINARY, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::HEXBINARY_DT));
	types->put(QNAME, $$new($XSSimpleTypeDecl, anySimpleType, QNAME, $XSSimpleTypeDecl::DV_QNAME, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::QNAME_DT));
	types->put(NOTATION, $$new($XSSimpleTypeDecl, anySimpleType, NOTATION, $XSSimpleTypeDecl::DV_NOTATION, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::NOTATION_DT));
	facets->whiteSpace = $XSSimpleType::WS_REPLACE;
	$var($XSSimpleTypeDecl, normalizedDV, $new($XSSimpleTypeDecl, stringDV, NORMALIZEDSTRING, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NORMALIZEDSTRING_DT));
	normalizedDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0);
	types->put(NORMALIZEDSTRING, normalizedDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, tokenDV, $new($XSSimpleTypeDecl, normalizedDV, TOKEN, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::TOKEN_DT));
	tokenDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0);
	types->put(TOKEN, tokenDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$set(facets, pattern, "([a-zA-Z]{1,8})(-[a-zA-Z0-9]{1,8})*"_s);
	$var($XSSimpleTypeDecl, languageDV, $new($XSSimpleTypeDecl, tokenDV, LANGUAGE, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::LANGUAGE_DT));
	languageDV->applyFacets1(facets, (int16_t)($XSSimpleType::FACET_WHITESPACE | $XSSimpleType::FACET_PATTERN), (int16_t)0);
	types->put(LANGUAGE, languageDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, nameDV, $new($XSSimpleTypeDecl, tokenDV, NAME, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NAME_DT));
	nameDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0, $XSSimpleTypeDecl::SPECIAL_PATTERN_NAME);
	types->put(NAME, nameDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, ncnameDV, $new($XSSimpleTypeDecl, nameDV, NCNAME, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NCNAME_DT));
	ncnameDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0, $XSSimpleTypeDecl::SPECIAL_PATTERN_NCNAME);
	types->put(NCNAME, ncnameDV);
	types->put(ID, $$new($XSSimpleTypeDecl, ncnameDV, ID, $XSSimpleTypeDecl::DV_ID, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::ID_DT));
	$var($XSSimpleTypeDecl, idrefDV, $new($XSSimpleTypeDecl, ncnameDV, IDREF, $XSSimpleTypeDecl::DV_IDREF, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::IDREF_DT));
	types->put(IDREF, idrefDV);
	facets->minLength = 1;
	$var($XSSimpleTypeDecl, tempDV, $new($XSSimpleTypeDecl, ($String*)nullptr, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, idrefDV, true, ($XSObjectList*)nullptr));
	$var($XSSimpleTypeDecl, idrefsDV, $new($XSSimpleTypeDecl, tempDV, IDREFS, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, ($XSObjectList*)nullptr));
	idrefsDV->applyFacets1(facets, $XSSimpleType::FACET_MINLENGTH, (int16_t)0);
	types->put(IDREFS, idrefsDV);
	$var($XSSimpleTypeDecl, entityDV, $new($XSSimpleTypeDecl, ncnameDV, ENTITY, $XSSimpleTypeDecl::DV_ENTITY, $XSSimpleType::ORDERED_FALSE, false, false, false, true, $XSConstants::ENTITY_DT));
	types->put(ENTITY, entityDV);
	facets->minLength = 1;
	$assign(tempDV, $new($XSSimpleTypeDecl, ($String*)nullptr, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, entityDV, true, ($XSObjectList*)nullptr));
	$var($XSSimpleTypeDecl, entitiesDV, $new($XSSimpleTypeDecl, tempDV, ENTITIES, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, ($XSObjectList*)nullptr));
	entitiesDV->applyFacets1(facets, $XSSimpleType::FACET_MINLENGTH, (int16_t)0);
	types->put(ENTITIES, entitiesDV);
	facets->whiteSpace = $XSSimpleType::WS_COLLAPSE;
	$var($XSSimpleTypeDecl, nmtokenDV, $new($XSSimpleTypeDecl, tokenDV, NMTOKEN, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, nullptr, $XSConstants::NMTOKEN_DT));
	nmtokenDV->applyFacets1(facets, $XSSimpleType::FACET_WHITESPACE, (int16_t)0, $XSSimpleTypeDecl::SPECIAL_PATTERN_NMTOKEN);
	types->put(NMTOKEN, nmtokenDV);
	facets->minLength = 1;
	$assign(tempDV, $new($XSSimpleTypeDecl, ($String*)nullptr, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, nmtokenDV, true, ($XSObjectList*)nullptr));
	$var($XSSimpleTypeDecl, nmtokensDV, $new($XSSimpleTypeDecl, tempDV, NMTOKENS, FullDVFactory::URI_SCHEMAFORSCHEMA, (int16_t)0, false, ($XSObjectList*)nullptr));
	nmtokensDV->applyFacets1(facets, $XSSimpleType::FACET_MINLENGTH, (int16_t)0);
	types->put(NMTOKENS, nmtokensDV);
}

void clinit$FullDVFactory($Class* class$) {
	$assignStatic(FullDVFactory::URI_SCHEMAFORSCHEMA, "http://www.w3.org/2001/XMLSchema"_s);
	$assignStatic(FullDVFactory::fFullTypes, $new($SymbolHash, 89));
	{
		FullDVFactory::createBuiltInTypes(FullDVFactory::fFullTypes);
	}
}

FullDVFactory::FullDVFactory() {
}

$Class* FullDVFactory::load$($String* name, bool initialize) {
	$loadClass(FullDVFactory, name, initialize, &_FullDVFactory_ClassInfo_, clinit$FullDVFactory, allocate$FullDVFactory);
	return class$;
}

$Class* FullDVFactory::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com