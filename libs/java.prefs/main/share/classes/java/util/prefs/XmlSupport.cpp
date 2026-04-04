#include <java/util/prefs/XmlSupport.h>
#include <java/io/BufferedWriter.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/InvalidPreferencesFormatException.h>
#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/XmlSupport$EH.h>
#include <java/util/prefs/XmlSupport$Resolver.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/transform/OutputKeys.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/TransformerFactory.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef DOCTYPE_SYSTEM
#undef EXTERNAL_XML_VERSION
#undef INDENT
#undef MAP_XML_VERSION
#undef PREFS_DTD
#undef PREFS_DTD_URI
#undef UTF_8

using $PreferencesArray = $Array<::java::util::prefs::Preferences>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $InvalidPreferencesFormatException = ::java::util::prefs::InvalidPreferencesFormatException;
using $Preferences = ::java::util::prefs::Preferences;
using $XmlSupport$EH = ::java::util::prefs::XmlSupport$EH;
using $XmlSupport$Resolver = ::java::util::prefs::XmlSupport$Resolver;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $Source = ::javax::xml::transform::Source;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $TransformerFactory = ::javax::xml::transform::TransformerFactory;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $NodeList = ::org::w3c::dom::NodeList;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace java {
	namespace util {
		namespace prefs {

$String* XmlSupport::PREFS_DTD_URI = nullptr;
$String* XmlSupport::PREFS_DTD = nullptr;
$String* XmlSupport::EXTERNAL_XML_VERSION = nullptr;
$String* XmlSupport::MAP_XML_VERSION = nullptr;

void XmlSupport::init$() {
}

void XmlSupport::export$($OutputStream* os, $Preferences* p, bool subTree) {
	$init(XmlSupport);
	$useLocalObjectStack();
	if ($nc($cast($AbstractPreferences, p))->isRemoved()) {
		$throwNew($IllegalStateException, "Node has been removed"_s);
	}
	$var($Document, doc, createPrefsDoc("preferences"_s));
	$var($Element, preferences, $nc(doc)->getDocumentElement());
	$nc(preferences)->setAttribute("EXTERNAL_XML_VERSION"_s, XmlSupport::EXTERNAL_XML_VERSION);
	$var($Element, xmlRoot, $cast($Element, preferences->appendChild($(doc->createElement("root"_s)))));
	$nc(xmlRoot)->setAttribute("type"_s, (p->isUserNode() ? "user"_s : "system"_s));
	$var($List, ancestors, $new($ArrayList));
	{
		$var($Preferences, kid, p);
		$var($Preferences, dad, kid->parent());
		for (; dad != nullptr; $assign(kid, dad), $assign(dad, kid->parent())) {
			ancestors->add(kid);
		}
	}
	$var($Element, e, xmlRoot);
	for (int32_t i = ancestors->size() - 1; i >= 0; --i) {
		$nc(e)->appendChild($(doc->createElement("map"_s)));
		$assign(e, $cast($Element, e->appendChild($(doc->createElement("node"_s)))));
		$nc(e)->setAttribute("name"_s, $($$sure($Preferences, ancestors->get(i))->name()));
	}
	putPreferencesInXml(e, doc, p, subTree);
	writeDoc(doc, os);
}

void XmlSupport::putPreferencesInXml($Element* elt, $Document* doc, $Preferences* prefs, bool subTree) {
	$init(XmlSupport);
	$useLocalObjectStack();
	$var($PreferencesArray, kidsCopy, nullptr);
	$var($StringArray, kidNames, nullptr);
	$synchronized($nc($cast($AbstractPreferences, prefs))->lock) {
		if ($cast($AbstractPreferences, prefs)->isRemoved()) {
			$$nc($nc(elt)->getParentNode())->removeChild(elt);
			return;
		}
		$var($StringArray, keys, prefs->keys());
		$var($Element, map, $cast($Element, $nc(elt)->appendChild($($nc(doc)->createElement("map"_s)))));
		{
			$var($StringArray, arr$, keys);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, key, arr$->get(i$));
				{
					$var($Element, entry, $cast($Element, $nc(map)->appendChild($(doc->createElement("entry"_s)))));
					$nc(entry)->setAttribute("key"_s, key);
					entry->setAttribute("value"_s, $(prefs->get(key, nullptr)));
				}
			}
		}
		if (subTree) {
			$assign(kidNames, prefs->childrenNames());
			$assign(kidsCopy, $new($PreferencesArray, $nc(kidNames)->length));
			for (int32_t i = 0; i < kidNames->length; ++i) {
				kidsCopy->set(i, $(prefs->node(kidNames->get(i))));
			}
		}
	}
	if (subTree) {
		for (int32_t i = 0; i < $nc(kidNames)->length; ++i) {
			$var($Element, xmlKid, $cast($Element, elt->appendChild($(doc->createElement("node"_s)))));
			$nc(xmlKid)->setAttribute("name"_s, kidNames->get(i));
			putPreferencesInXml(xmlKid, doc, $nc(kidsCopy)->get(i), subTree);
		}
	}
}

void XmlSupport::importPreferences($InputStream* is) {
	$init(XmlSupport);
	$useLocalObjectStack();
	try {
		$var($Document, doc, loadPrefsDoc(is));
		$var($String, xmlVersion, $$nc($nc(doc)->getDocumentElement())->getAttribute("EXTERNAL_XML_VERSION"_s));
		if ($nc(xmlVersion)->compareTo(XmlSupport::EXTERNAL_XML_VERSION) > 0) {
			$throwNew($InvalidPreferencesFormatException, $$str({"Exported preferences file format version "_s, xmlVersion, " is not supported. This java installation can read versions "_s, XmlSupport::EXTERNAL_XML_VERSION, " or older. You may need to install a newer version of JDK."_s}));
		}
		$var($Element, xmlRoot, $cast($Element, $$nc($$nc(doc->getDocumentElement())->getChildNodes())->item(0)));
		$var($Preferences, prefsRoot, $$nc($nc(xmlRoot)->getAttribute("type"_s))->equals("user"_s) ? $Preferences::userRoot() : $Preferences::systemRoot());
		ImportSubtree(prefsRoot, xmlRoot);
	} catch ($SAXException& e) {
		$throwNew($InvalidPreferencesFormatException, e);
	}
}

$Document* XmlSupport::createPrefsDoc($String* qname) {
	$init(XmlSupport);
	$useLocalObjectStack();
	try {
		$var($DOMImplementation, di, $$nc($$nc($DocumentBuilderFactory::newInstance())->newDocumentBuilder())->getDOMImplementation());
		$var($DocumentType, dt, $nc(di)->createDocumentType(qname, nullptr, XmlSupport::PREFS_DTD_URI));
		return di->createDocument(nullptr, qname, dt);
	} catch ($ParserConfigurationException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$Document* XmlSupport::loadPrefsDoc($InputStream* in) {
	$init(XmlSupport);
	$useLocalObjectStack();
	$var($DocumentBuilderFactory, dbf, $DocumentBuilderFactory::newInstance());
	$nc(dbf)->setIgnoringElementContentWhitespace(true);
	dbf->setValidating(true);
	dbf->setCoalescing(true);
	dbf->setIgnoringComments(true);
	try {
		$var($DocumentBuilder, db, dbf->newDocumentBuilder());
		$nc(db)->setEntityResolver($$new($XmlSupport$Resolver));
		db->setErrorHandler($$new($XmlSupport$EH));
		return db->parse($$new($InputSource, in));
	} catch ($ParserConfigurationException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

void XmlSupport::writeDoc($Document* doc, $OutputStream* out) {
	$init(XmlSupport);
	$useLocalObjectStack();
	try {
		$var($TransformerFactory, tf, $TransformerFactory::newInstance());
		try {
			$nc(tf)->setAttribute("indent-number"_s, $($Integer::valueOf(2)));
		} catch ($IllegalArgumentException& iae) {
		}
		$var($Transformer, t, $nc(tf)->newTransformer());
		$init($OutputKeys);
		$nc(t)->setOutputProperty($OutputKeys::DOCTYPE_SYSTEM, $($$nc($nc(doc)->getDoctype())->getSystemId()));
		t->setOutputProperty($OutputKeys::INDENT, "yes"_s);
		$var($Source, var$0, $new($DOMSource, doc));
		$init($StandardCharsets);
		t->transform(var$0, $$new($StreamResult, $$new($BufferedWriter, $$new($OutputStreamWriter, out, $StandardCharsets::UTF_8))));
	} catch ($TransformerException& e) {
		$throwNew($AssertionError, $of(e));
	}
}

void XmlSupport::ImportSubtree($Preferences* prefsNode, $Element* xmlNode) {
	$init(XmlSupport);
	$useLocalObjectStack();
	$var($NodeList, xmlKids, $nc(xmlNode)->getChildNodes());
	int32_t numXmlKids = $nc(xmlKids)->getLength();
	$var($PreferencesArray, prefsKids, nullptr);
	$synchronized($nc($cast($AbstractPreferences, prefsNode))->lock) {
		if ($cast($AbstractPreferences, prefsNode)->isRemoved()) {
			return;
		}
		$var($Element, firstXmlKid, $cast($Element, xmlKids->item(0)));
		ImportPrefs(prefsNode, firstXmlKid);
		$assign(prefsKids, $new($PreferencesArray, numXmlKids - 1));
		for (int32_t i = 1; i < numXmlKids; ++i) {
			$var($Element, xmlKid, $cast($Element, xmlKids->item(i)));
			prefsKids->set(i - 1, $(prefsNode->node($($nc(xmlKid)->getAttribute("name"_s)))));
		}
	}
	for (int32_t i = 1; i < numXmlKids; ++i) {
		ImportSubtree(prefsKids->get(i - 1), $$cast($Element, xmlKids->item(i)));
	}
}

void XmlSupport::ImportPrefs($Preferences* prefsNode, $Element* map) {
	$init(XmlSupport);
	$useLocalObjectStack();
	$var($NodeList, entries, $nc(map)->getChildNodes());
	for (int32_t i = 0, numEntries = $nc(entries)->getLength(); i < numEntries; ++i) {
		$var($Element, entry, $cast($Element, entries->item(i)));
		$var($String, var$0, $nc(entry)->getAttribute("key"_s));
		$nc(prefsNode)->put(var$0, $(entry->getAttribute("value"_s)));
	}
}

void XmlSupport::exportMap($OutputStream* os, $Map* map) {
	$init(XmlSupport);
	$useLocalObjectStack();
	$var($Document, doc, createPrefsDoc("map"_s));
	$var($Element, xmlMap, $nc(doc)->getDocumentElement());
	$nc(xmlMap)->setAttribute("MAP_XML_VERSION"_s, XmlSupport::MAP_XML_VERSION);
	{
		$var($Iterator, i$, $$nc($nc(map)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Element, xe, $cast($Element, xmlMap->appendChild($(doc->createElement("entry"_s)))));
				$nc(xe)->setAttribute("key"_s, $$cast($String, $nc(e)->getKey()));
				xe->setAttribute("value"_s, $$cast($String, e->getValue()));
			}
		}
	}
	writeDoc(doc, os);
}

void XmlSupport::importMap($InputStream* is, $Map* m) {
	$init(XmlSupport);
	$useLocalObjectStack();
	try {
		$var($Document, doc, loadPrefsDoc(is));
		$var($Element, xmlMap, $nc(doc)->getDocumentElement());
		$var($String, mapVersion, $nc(xmlMap)->getAttribute("MAP_XML_VERSION"_s));
		if ($nc(mapVersion)->compareTo(XmlSupport::MAP_XML_VERSION) > 0) {
			$throwNew($InvalidPreferencesFormatException, $$str({"Preferences map file format version "_s, mapVersion, " is not supported. This java installation can read versions "_s, XmlSupport::MAP_XML_VERSION, " or older. You may need to install a newer version of JDK."_s}));
		}
		$var($NodeList, entries, xmlMap->getChildNodes());
		for (int32_t i = 0, numEntries = $nc(entries)->getLength(); i < numEntries; ++i) {
			$var($Element, entry, $cast($Element, entries->item(i)));
			$var($Object, var$0, $nc(entry)->getAttribute("key"_s));
			$nc(m)->put(var$0, $(entry->getAttribute("value"_s)));
		}
	} catch ($SAXException& e) {
		$throwNew($InvalidPreferencesFormatException, e);
	}
}

XmlSupport::XmlSupport() {
}

void XmlSupport::clinit$($Class* clazz) {
	$assignStatic(XmlSupport::PREFS_DTD_URI, "http://java.sun.com/dtd/preferences.dtd"_s);
	$assignStatic(XmlSupport::PREFS_DTD, "<?xml version=\"1.0\" encoding=\"UTF-8\"?><!-- DTD for preferences --><!ELEMENT preferences (root) ><!ATTLIST preferences EXTERNAL_XML_VERSION CDATA \"0.0\"  ><!ELEMENT root (map, node*) ><!ATTLIST root          type (system|user) #REQUIRED ><!ELEMENT node (map, node*) ><!ATTLIST node          name CDATA #REQUIRED ><!ELEMENT map (entry*) ><!ATTLIST map  MAP_XML_VERSION CDATA \"0.0\"  ><!ELEMENT entry EMPTY ><!ATTLIST entry          key CDATA #REQUIRED          value CDATA #REQUIRED >"_s);
	$assignStatic(XmlSupport::EXTERNAL_XML_VERSION, "1.0"_s);
	$assignStatic(XmlSupport::MAP_XML_VERSION, "1.0"_s);
}

$Class* XmlSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PREFS_DTD_URI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, PREFS_DTD_URI)},
		{"PREFS_DTD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, PREFS_DTD)},
		{"EXTERNAL_XML_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, EXTERNAL_XML_VERSION)},
		{"MAP_XML_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, MAP_XML_VERSION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XmlSupport, init$, void)},
		{"ImportPrefs", "(Ljava/util/prefs/Preferences;Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlSupport, ImportPrefs, void, $Preferences*, $Element*)},
		{"ImportSubtree", "(Ljava/util/prefs/Preferences;Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlSupport, ImportSubtree, void, $Preferences*, $Element*)},
		{"createPrefsDoc", "(Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlSupport, createPrefsDoc, $Document*, $String*)},
		{"export", "(Ljava/io/OutputStream;Ljava/util/prefs/Preferences;Z)V", nullptr, $STATIC, $staticMethod(XmlSupport, export$, void, $OutputStream*, $Preferences*, bool), "java.io.IOException,java.util.prefs.BackingStoreException"},
		{"exportMap", "(Ljava/io/OutputStream;Ljava/util/Map;)V", "(Ljava/io/OutputStream;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $STATIC, $staticMethod(XmlSupport, exportMap, void, $OutputStream*, $Map*), "java.io.IOException"},
		{"importMap", "(Ljava/io/InputStream;Ljava/util/Map;)V", "(Ljava/io/InputStream;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $STATIC, $staticMethod(XmlSupport, importMap, void, $InputStream*, $Map*), "java.io.IOException,java.util.prefs.InvalidPreferencesFormatException"},
		{"importPreferences", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $staticMethod(XmlSupport, importPreferences, void, $InputStream*), "java.io.IOException,java.util.prefs.InvalidPreferencesFormatException"},
		{"loadPrefsDoc", "(Ljava/io/InputStream;)Lorg/w3c/dom/Document;", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlSupport, loadPrefsDoc, $Document*, $InputStream*), "org.xml.sax.SAXException,java.io.IOException"},
		{"putPreferencesInXml", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Document;Ljava/util/prefs/Preferences;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlSupport, putPreferencesInXml, void, $Element*, $Document*, $Preferences*, bool), "java.util.prefs.BackingStoreException"},
		{"writeDoc", "(Lorg/w3c/dom/Document;Ljava/io/OutputStream;)V", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(XmlSupport, writeDoc, void, $Document*, $OutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.XmlSupport$EH", "java.util.prefs.XmlSupport", "EH", $PRIVATE | $STATIC},
		{"java.util.prefs.XmlSupport$Resolver", "java.util.prefs.XmlSupport", "Resolver", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.XmlSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.prefs.XmlSupport$EH,java.util.prefs.XmlSupport$Resolver"
	};
	$loadClass(XmlSupport, name, initialize, &classInfo$$, XmlSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XmlSupport);
	});
	return class$;
}

$Class* XmlSupport::class$ = nullptr;

		} // prefs
	} // util
} // java