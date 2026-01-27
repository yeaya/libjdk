#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_fr.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef AXIS_SUPPORT_ERR
#undef CANT_RESOLVE_RELATIVE_URI_ERR
#undef DATA_CONVERSION_ERR
#undef DOM_ADAPTER_INIT_ERR
#undef EQUALITY_EXPR_ERR
#undef EXTERNAL_FUNC_ERR
#undef FORMAT_NUMBER_ERR
#undef INVALID_ARGUMENT_ERR
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef ITERATOR_CLONE_ERR
#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_PREFIX_ERR
#undef PARSER_DTD_SUPPORT_ERR
#undef RUN_TIME_COPY_ERR
#undef RUN_TIME_INTERNAL_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_NAMESPACE_ERR
#undef TYPED_AXIS_SUPPORT_ERR
#undef UNALLOWED_EXTENSION_ELEMENT_ERR
#undef UNALLOWED_EXTENSION_FUNCTION_ERR
#undef UNKNOWN_TRANSLET_VERSION_ERR
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$MethodInfo _ErrorMessages_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_fr_MethodInfo_
};

$Object* allocate$ErrorMessages_fr($Class* clazz) {
	return $of($alloc(ErrorMessages_fr));
}

void ErrorMessages_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"Erreur interne d\'\'exécution dans \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"Erreur d\'exécution de <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Conversion de \'\'{0}\'\' à \'\'{1}\'\' non valide."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of("Fonction externe \'\'{0}\'\' non prise en charge par XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"Type d\'argument inconnu dans l\'expression d\'égalité."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of("Type d\'\'argument \'\'{0}\'\' non valide dans l\'\'appel de \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"Tentative de formatage du nombre \'\'{0}\'\' à l\'\'aide du modèle \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"Impossible de cloner l\'\'itérateur \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"Itérateur de l\'\'axe \'\'{0}\'\' non pris en charge."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"Itérateur de l\'\'axe saisi \'\'{0}\'\' non pris en charge."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"Attribut \'\'{0}\'\' en dehors de l\'\'élément."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"La déclaration d\'\'espace de noms \'\'{0}\'\'=\'\'{1}\'\' est à l\'\'extérieur de l\'\'élément."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"L\'\'espace de noms du préfixe \'\'{0}\'\' n\'\'a pas été déclaré."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter créé avec le mauvais type de DOM source."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"L\'analyseur SAX que vous utilisez ne gère pas les événements de déclaration DTD."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of("L\'analyseur SAX que vous utilisez ne prend pas en charge les espaces de noms XML."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"Impossible de résoudre la référence d\'\'URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"Elément XSL \'\'{0}\'\' non pris en charge"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of("Extension XSLTC \'\'{0}\'\' non reconnue"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"Le translet spécifié, \'\'{0}\'\', a été créé à l\'\'aide d\'\'une version de XSLTC plus récente que la version de l\'\'exécution XSLTC utilisée. Vous devez recompiler la feuille de style ou utiliser une version plus récente de XSLTC pour exécuter ce translet."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"Un attribut dont la valeur doit être un QName avait la valeur \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"Un attribut dont la valeur doit être un NCName avait la valeur \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"L\'\'utilisation de la fonction d\'\'extension \'\'{0}\'\' n\'\'est pas autorisée lorsque la fonctionnalité de traitement sécurisé est définie sur True."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"L\'\'utilisation de l\'\'élément d\'\'extension \'\'{0}\'\' n\'\'est pas autorisée lorsque la fonctionnalité de traitement sécurisé est définie sur True."_s)
		})
	});
}

ErrorMessages_fr::ErrorMessages_fr() {
}

$Class* ErrorMessages_fr::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_fr, name, initialize, &_ErrorMessages_fr_ClassInfo_, allocate$ErrorMessages_fr);
	return class$;
}

$Class* ErrorMessages_fr::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com