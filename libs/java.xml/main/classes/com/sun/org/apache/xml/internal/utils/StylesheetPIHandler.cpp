#include <com/sun/org/apache/xml/internal/utils/StylesheetPIHandler.h>

#include <com/sun/org/apache/xml/internal/utils/StopParseException.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/URIResolver.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $StopParseException = ::com::sun::org::apache::xml::internal::utils::StopParseException;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Source = ::javax::xml::transform::Source;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $Attributes = ::org::xml::sax::Attributes;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _StylesheetPIHandler_FieldInfo_[] = {
	{"m_baseID", "Ljava/lang/String;", nullptr, 0, $field(StylesheetPIHandler, m_baseID)},
	{"m_media", "Ljava/lang/String;", nullptr, 0, $field(StylesheetPIHandler, m_media)},
	{"m_title", "Ljava/lang/String;", nullptr, 0, $field(StylesheetPIHandler, m_title)},
	{"m_charset", "Ljava/lang/String;", nullptr, 0, $field(StylesheetPIHandler, m_charset)},
	{"m_stylesheets", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/transform/Source;>;", 0, $field(StylesheetPIHandler, m_stylesheets)},
	{"m_uriResolver", "Ljavax/xml/transform/URIResolver;", nullptr, 0, $field(StylesheetPIHandler, m_uriResolver)},
	{}
};

$MethodInfo _StylesheetPIHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StylesheetPIHandler, init$, void, $String*, $String*, $String*, $String*)},
	{"getAssociatedStylesheet", "()Ljavax/xml/transform/Source;", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, getAssociatedStylesheet, $Source*)},
	{"getBaseId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, getBaseId, $String*)},
	{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, getURIResolver, $URIResolver*)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setBaseId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, setBaseId, void, $String*)},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, setURIResolver, void, $URIResolver*)},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(StylesheetPIHandler, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _StylesheetPIHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StylesheetPIHandler",
	"org.xml.sax.helpers.DefaultHandler",
	nullptr,
	_StylesheetPIHandler_FieldInfo_,
	_StylesheetPIHandler_MethodInfo_
};

$Object* allocate$StylesheetPIHandler($Class* clazz) {
	return $of($alloc(StylesheetPIHandler));
}

void StylesheetPIHandler::setURIResolver($URIResolver* resolver) {
	$set(this, m_uriResolver, resolver);
}

$URIResolver* StylesheetPIHandler::getURIResolver() {
	return this->m_uriResolver;
}

void StylesheetPIHandler::init$($String* baseID, $String* media, $String* title, $String* charset) {
	$DefaultHandler::init$();
	$set(this, m_stylesheets, $new($ArrayList));
	$set(this, m_baseID, baseID);
	$set(this, m_media, media);
	$set(this, m_title, title);
	$set(this, m_charset, charset);
}

$Source* StylesheetPIHandler::getAssociatedStylesheet() {
	int32_t sz = $nc(this->m_stylesheets)->size();
	if (sz > 0) {
		$var($Source, source, $cast($Source, $nc(this->m_stylesheets)->get(sz - 1)));
		return source;
	} else {
		return nullptr;
	}
}

void StylesheetPIHandler::processingInstruction($String* target, $String* data) {
	$useLocalCurrentObjectStackCache();
	if ($nc(target)->equals("xml-stylesheet"_s)) {
		$var($String, href, nullptr);
		$var($String, type, nullptr);
		$var($String, title, nullptr);
		$var($String, media, nullptr);
		$var($String, charset, nullptr);
		bool alternate = false;
		$var($StringTokenizer, tokenizer, $new($StringTokenizer, data, " \t=\n"_s, true));
		bool lookedAhead = false;
		$var($Source, source, nullptr);
		$var($String, token, ""_s);
		while (tokenizer->hasMoreTokens()) {
			if (!lookedAhead) {
				$assign(token, tokenizer->nextToken());
			} else {
				lookedAhead = false;
			}
			bool var$0 = tokenizer->hasMoreTokens();
			if (var$0) {
				bool var$2 = $nc(token)->equals(" "_s);
				bool var$1 = var$2 || $nc(token)->equals("\t"_s);
				var$0 = (var$1 || $nc(token)->equals("="_s));
			}
			if (var$0) {
				continue;
			}
			$var($String, name, token);
			if ($nc(name)->equals("type"_s)) {
				$assign(token, tokenizer->nextToken());
				while (true) {
					bool var$3 = tokenizer->hasMoreTokens();
					if (var$3) {
						bool var$5 = $nc(token)->equals(" "_s);
						bool var$4 = var$5 || $nc(token)->equals("\t"_s);
						var$3 = (var$4 || $nc(token)->equals("="_s));
					}
					if (!(var$3)) {
						break;
					}
					{
						$assign(token, tokenizer->nextToken());
					}
				}
				$assign(type, $nc(token)->substring(1, token->length() - 1));
			} else if (name->equals("href"_s)) {
				$assign(token, tokenizer->nextToken());
				while (true) {
					bool var$6 = tokenizer->hasMoreTokens();
					if (var$6) {
						bool var$8 = $nc(token)->equals(" "_s);
						bool var$7 = var$8 || $nc(token)->equals("\t"_s);
						var$6 = (var$7 || $nc(token)->equals("="_s));
					}
					if (!(var$6)) {
						break;
					}
					{
						$assign(token, tokenizer->nextToken());
					}
				}
				$assign(href, token);
				if (tokenizer->hasMoreTokens()) {
					$assign(token, tokenizer->nextToken());
					while (true) {
						bool var$9 = $nc(token)->equals("="_s);
						if (!(var$9 && tokenizer->hasMoreTokens())) {
							break;
						}
						{
							$assign(href, $str({href, token, $(tokenizer->nextToken())}));
							if (tokenizer->hasMoreTokens()) {
								$assign(token, tokenizer->nextToken());
								lookedAhead = true;
							} else {
								break;
							}
						}
					}
				}
				$assign(href, $nc(href)->substring(1, href->length() - 1));
				try {
					if (this->m_uriResolver != nullptr) {
						$assign(source, $nc(this->m_uriResolver)->resolve(href, this->m_baseID));
					} else {
						$assign(href, $SystemIDResolver::getAbsoluteURI(href, this->m_baseID));
						$assign(source, $new($SAXSource, $$new($InputSource, href)));
					}
				} catch ($TransformerException& te) {
					$throwNew($SAXException, static_cast<$Exception*>(te));
				}
			} else if (name->equals("title"_s)) {
				$assign(token, tokenizer->nextToken());
				while (true) {
					bool var$10 = tokenizer->hasMoreTokens();
					if (var$10) {
						bool var$12 = $nc(token)->equals(" "_s);
						bool var$11 = var$12 || $nc(token)->equals("\t"_s);
						var$10 = (var$11 || $nc(token)->equals("="_s));
					}
					if (!(var$10)) {
						break;
					}
					{
						$assign(token, tokenizer->nextToken());
					}
				}
				$assign(title, $nc(token)->substring(1, token->length() - 1));
			} else if (name->equals("media"_s)) {
				$assign(token, tokenizer->nextToken());
				while (true) {
					bool var$13 = tokenizer->hasMoreTokens();
					if (var$13) {
						bool var$15 = $nc(token)->equals(" "_s);
						bool var$14 = var$15 || $nc(token)->equals("\t"_s);
						var$13 = (var$14 || $nc(token)->equals("="_s));
					}
					if (!(var$13)) {
						break;
					}
					{
						$assign(token, tokenizer->nextToken());
					}
				}
				$assign(media, $nc(token)->substring(1, token->length() - 1));
			} else if (name->equals("charset"_s)) {
				$assign(token, tokenizer->nextToken());
				while (true) {
					bool var$16 = tokenizer->hasMoreTokens();
					if (var$16) {
						bool var$18 = $nc(token)->equals(" "_s);
						bool var$17 = var$18 || $nc(token)->equals("\t"_s);
						var$16 = (var$17 || $nc(token)->equals("="_s));
					}
					if (!(var$16)) {
						break;
					}
					{
						$assign(token, tokenizer->nextToken());
					}
				}
				$assign(charset, $nc(token)->substring(1, token->length() - 1));
			} else if (name->equals("alternate"_s)) {
				$assign(token, tokenizer->nextToken());
				while (true) {
					bool var$19 = tokenizer->hasMoreTokens();
					if (var$19) {
						bool var$21 = $nc(token)->equals(" "_s);
						bool var$20 = var$21 || $nc(token)->equals("\t"_s);
						var$19 = (var$20 || $nc(token)->equals("="_s));
					}
					if (!(var$19)) {
						break;
					}
					{
						$assign(token, tokenizer->nextToken());
					}
				}
				alternate = $($nc(token)->substring(1, token->length() - 1))->equals("yes"_s);
			}
		}
		bool var$22 = (nullptr != type);
		if (var$22) {
			bool var$24 = type->equals("text/xsl"_s);
			bool var$23 = var$24 || $nc(type)->equals("text/xml"_s);
			var$22 = (var$23 || type->equals("application/xml+xslt"_s));
		}
		if (var$22 && (nullptr != href)) {
			if (nullptr != this->m_media) {
				if (nullptr != media) {
					if (!media->equals(this->m_media)) {
						return;
					}
				} else {
					return;
				}
			}
			if (nullptr != this->m_charset) {
				if (nullptr != charset) {
					if (!charset->equals(this->m_charset)) {
						return;
					}
				} else {
					return;
				}
			}
			if (nullptr != this->m_title) {
				if (nullptr != title) {
					if (!title->equals(this->m_title)) {
						return;
					}
				} else {
					return;
				}
			}
			$nc(this->m_stylesheets)->add(source);
		}
	}
}

void StylesheetPIHandler::startElement($String* namespaceURI, $String* localName, $String* qName, $Attributes* atts) {
	$throwNew($StopParseException);
}

void StylesheetPIHandler::setBaseId($String* baseId) {
	$set(this, m_baseID, baseId);
}

$String* StylesheetPIHandler::getBaseId() {
	return this->m_baseID;
}

StylesheetPIHandler::StylesheetPIHandler() {
}

$Class* StylesheetPIHandler::load$($String* name, bool initialize) {
	$loadClass(StylesheetPIHandler, name, initialize, &_StylesheetPIHandler_ClassInfo_, allocate$StylesheetPIHandler);
	return class$;
}

$Class* StylesheetPIHandler::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com