#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_fr.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_NAMESPACE_PREFIX
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ATTR_NAME
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_OIERROR
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_STRING_TOO_LONG
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNABLE_TO_SERIALIZE_NODE
#undef ER_UNSUPPORTED_ENCODING
#undef ER_WARNING_WF_NOT_CHECKED
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT
#undef ER_WRITING_INTERNAL_SUBSET
#undef ER_XML_VERSION_NOT_SUPPORTED

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

void SerializerMessages_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_fr::getContents() {
	$useLocalObjectStack();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGKEY,
			u"La clé de message \'\'{0}\'\' ne figure pas dans la classe de messages \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGFORMAT,
			"Echec du format de message \'\'{0}\'\' dans la classe de messages \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER,
			u"La classe de serializer \'\'{0}\'\' n\'\'implémente pas org.xml.sax.ContentHandler."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_FIND,
			"La ressource [ {0} ] est introuvable.\n {1}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_LOAD,
			"La ressource [ {0} ] n\'\'a pas pu charger : {1} \n {2} \t {3}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			"Taille du tampon <=0"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_UTF16_SURROGATE,
			u"Substitut UTF-16 non valide détecté : {0} ?"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_OIERROR,
			"Erreur d\'E/S"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION,
			u"Impossible d\'\'ajouter l\'\'attribut {0} après des noeuds enfant ou avant la production d\'\'un élément. L\'\'attribut est ignoré."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NAMESPACE_PREFIX,
			u"L\'\'espace de noms du préfixe \'\'{0}\'\' n\'\'a pas été déclaré."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_ATTRIBUTE,
			u"Attribut \'\'{0}\'\' en dehors de l\'\'élément."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_NAMESPACE,
			u"La déclaration d\'\'espace de noms \'\'{0}\'\'=\'\'{1}\'\' est à l\'\'extérieur de l\'\'élément."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_RESOURCE,
			u"Impossible de charger \'\'{0}\'\' (vérifier CLASSPATH), les valeurs par défaut sont donc employées"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_CHARACTER,
			u"Tentative de sortie d\'\'un caractère avec une valeur entière {0}, non représenté dans l\'\'encodage de sortie spécifié pour {1}."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY,
			u"Impossible de charger le fichier de propriétés \'\'{0}\'\' pour la méthode de sortie \'\'{1}\'\' (vérifier CLASSPATH)"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_PORT,
			u"Numéro de port non valide"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PORT_WHEN_HOST_NULL,
			u"Impossible de définir le port quand l\'hôte est NULL"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED,
			u"Le format de l\'adresse de l\'hôte n\'est pas correct"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_NOT_CONFORMANT,
			u"Le modèle n\'est pas conforme."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_FROM_NULL_STRING,
			u"Impossible de définir le modèle à partir de la chaîne NULL"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE,
			u"Le chemin d\'accès contient une séquence d\'échappement non valide"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_INVALID_CHAR,
			u"Le chemin contient un caractère non valide : {0}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_INVALID_CHAR,
			u"Le fragment contient un caractère non valide"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_WHEN_PATH_NULL,
			u"Impossible de définir le fragment quand le chemin d\'accès est NULL"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_FOR_GENERIC_URI,
			u"Le fragment ne peut être défini que pour un URI générique"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_SCHEME_IN_URI,
			u"Modèle introuvable dans l\'URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS,
			u"Impossible d\'initialiser l\'URI avec des paramètres vides"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH,
			u"Le fragment ne doit pas être indiqué à la fois dans le chemin et dans le fragment"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_QUERY_STRING_IN_PATH,
			u"La chaîne de requête ne doit pas figurer dans un chemin et une chaîne de requête"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_PORT_IF_NO_HOST,
			u"Le port peut ne pas être spécifié si l\'hôte ne l\'est pas"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_USERINFO_IF_NO_HOST,
			u"Userinfo peut ne pas être spécifié si l\'hôte ne l\'est pas"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_XML_VERSION_NOT_SUPPORTED,
			u"Avertissement : la version du document de sortie doit être \'\'{0}\'\'. Cette version XML n\'\'est pas prise en charge. La version du document de sortie sera \'\'1.0\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_REQUIRED,
			u"Modèle obligatoire."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FACTORY_PROPERTY_MISSING,
			u"L\'\'objet de propriétés transmis à SerializerFactory ne comporte aucune propriété \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ENCODING_NOT_SUPPORTED,
			u"Avertissement : l\'\'encodage \'\'{0}\'\' n\'\'est pas pris en charge par l\'\'exécution Java."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_FOUND,
			u"Le paramètre \'\'{0}\'\' n\'\'est pas reconnu."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_SUPPORTED,
			u"Le paramètre \'\'{0}\'\' est reconnu mais la valeur demandée ne peut pas être définie."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRING_TOO_LONG,
			u"La chaîne obtenue est trop longue pour tenir dans un élément DOMString : \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_TYPE_MISMATCH_ERR,
			u"Le type de valeur pour ce nom de paramètre n\'est pas compatible avec le type de valeur attendu. "_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_OUTPUT_SPECIFIED,
			u"La destination de sortie dans laquelle écrire les données est NULL."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNSUPPORTED_ENCODING,
			u"Un encodage non pris en charge a été détecté."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNABLE_TO_SERIALIZE_NODE,
			u"Le noeud n\'a pas pu être sérialisé."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CDATA_SECTIONS_SPLIT,
			"La section CDATA contient des marqueurs de fin \']]>\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WARNING_WF_NOT_CHECKED,
			u"Une instance du vérificateur de format correct n\'a pas pu être créée. Le paramètre de format correct a été défini sur True mais la vérification de format correct n\'a pas pu être réalisée."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER,
			u"Le noeud \'\'{0}\'\' contient des caractères XML non valides."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT,
			u"Un caractère XML non valide (Unicode : 0x{0}) a été détecté dans le commentaire."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_PI,
			u"Un caractère XML non valide (Unicode : 0x{0}) a été détecté dans les données d\'\'instruction de traitement."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA,
			u"Un caractère XML non valide (Unicode : 0x{0}) a été détecté dans le contenu de la section CDATA."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT,
			u"Un caractère XML non valide (Unicode : 0x{0}) a été détecté dans le contenu des données alphanumériques du noeud."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME,
			u"Un caractère XML non valide a été détecté dans le noeud {0} nommé \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_DASH_IN_COMMENT,
			u"La chaîne \"--\" n\'est pas autorisée dans les commentaires."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_LT_IN_ATTVAL,
			u"La valeur de l\'\'attribut \"{1}\" associé à un type d\'\'élément \"{0}\" ne doit pas contenir le caractère \'\'<\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_UNPARSED_ENT,
			u"La référence d\'\'entité non analysée \"&{0};\" n\'\'est pas autorisée."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_EXTERNAL_ENT,
			u"La référence d\'\'entité externe \"&{0};\" n\'\'est pas autorisée dans une valeur d\'\'attribut."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND,
			u"Le préfixe \"{0}\" ne peut pas être lié à l\'\'espace de noms \"{1}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ELEMENT_NAME,
			u"Le nom local de l\'\'élément \"{0}\" est NULL."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ATTR_NAME,
			"Le nom local de l\'\'attribut \"{0}\" est NULL."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF,
			u"Le texte de remplacement du noeud d\'\'entité \"{0}\" contient un noeud d\'\'élément \"{1}\" avec un préfixe non lié \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF,
			u"Le texte de remplacement du noeud d\'\'entité \"{0}\" contient un noeud d\'\'attribut \"{1}\" avec un préfixe non lié \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WRITING_INTERNAL_SUBSET,
			u"Une erreur s\'est produite lors de l\'écriture du sous-ensemble interne."_s
		})
	}));
	return contents;
}

SerializerMessages_fr::SerializerMessages_fr() {
}

$Class* SerializerMessages_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerMessages_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializerMessages_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializerMessages_fr);
	});
	return class$;
}

$Class* SerializerMessages_fr::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com