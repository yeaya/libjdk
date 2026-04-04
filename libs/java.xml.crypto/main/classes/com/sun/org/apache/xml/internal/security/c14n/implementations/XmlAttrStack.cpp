#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack$XmlsStackElement.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Attr.h>
#include <jcpp.h>

#undef LOG

using $XmlAttrStack$XmlsStackElement = ::com::sun::org::apache::xml::internal::security::c14n::implementations::XmlAttrStack$XmlsStackElement;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Attr = ::org::w3c::dom::Attr;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

$Logger* XmlAttrStack::LOG = nullptr;

void XmlAttrStack::init$(bool c14n11) {
	this->currentLevel = 0;
	this->lastlevel = 0;
	$set(this, levels, $new($ArrayList));
	this->c14n11 = c14n11;
}

void XmlAttrStack::push(int32_t level) {
	$useLocalObjectStack();
	this->currentLevel = level;
	if (this->currentLevel == -1) {
		return;
	}
	$set(this, cur, nullptr);
	while (this->lastlevel >= this->currentLevel) {
		this->levels->remove(this->levels->size() - 1);
		int32_t newSize = this->levels->size();
		if (newSize == 0) {
			this->lastlevel = 0;
			return;
		}
		this->lastlevel = $nc(($$cast($XmlAttrStack$XmlsStackElement, this->levels->get(newSize - 1))))->level;
	}
}

void XmlAttrStack::addXmlnsAttr($Attr* n) {
	if (this->cur == nullptr) {
		$set(this, cur, $new($XmlAttrStack$XmlsStackElement));
		this->cur->level = this->currentLevel;
		this->levels->add(this->cur);
		this->lastlevel = this->currentLevel;
	}
	$nc($nc(this->cur)->nodes)->add(n);
}

void XmlAttrStack::getXmlnsAttr($Collection* col) {
	$useLocalObjectStack();
	int32_t size = this->levels->size() - 1;
	if (this->cur == nullptr) {
		$set(this, cur, $new($XmlAttrStack$XmlsStackElement));
		this->cur->level = this->currentLevel;
		this->lastlevel = this->currentLevel;
		this->levels->add(this->cur);
	}
	bool parentRendered = false;
	$var($XmlAttrStack$XmlsStackElement, e, nullptr);
	if (size == -1) {
		parentRendered = true;
	} else {
		$assign(e, $cast($XmlAttrStack$XmlsStackElement, this->levels->get(size)));
		if ($nc(e)->rendered && e->level + 1 == this->currentLevel) {
			parentRendered = true;
		}
	}
	if (parentRendered) {
		$nc(col)->addAll($nc(this->cur)->nodes);
		this->cur->rendered = true;
		return;
	}
	$var($Map, loa, $new($HashMap));
	if (this->c14n11) {
		$var($List, baseAttrs, $new($ArrayList));
		bool successiveOmitted = true;
		for (; size >= 0; --size) {
			$assign(e, $cast($XmlAttrStack$XmlsStackElement, this->levels->get(size)));
			if ($nc(e)->rendered) {
				successiveOmitted = false;
			}
			$var($Iterator, it, $nc(e->nodes)->iterator());
			while ($nc(it)->hasNext() && successiveOmitted) {
				$var($Attr, n, $cast($Attr, it->next()));
				if ("base"_s->equals($($nc(n)->getLocalName())) && !e->rendered) {
					baseAttrs->add(n);
				} else if (!loa->containsKey($(n->getName()))) {
					loa->put($(n->getName()), n);
				}
			}
		}
		if (!baseAttrs->isEmpty()) {
			$var($Iterator, it, $nc(col)->iterator());
			$var($String, base, nullptr);
			$var($Attr, baseAttr, nullptr);
			while ($nc(it)->hasNext()) {
				$var($Attr, n, $cast($Attr, it->next()));
				if ("base"_s->equals($($nc(n)->getLocalName()))) {
					$assign(base, n->getValue());
					$assign(baseAttr, n);
					break;
				}
			}
			$assign(it, baseAttrs->iterator());
			while ($nc(it)->hasNext()) {
				$var($Attr, n, $cast($Attr, it->next()));
				if (base == nullptr) {
					$assign(base, $nc(n)->getValue());
					$assign(baseAttr, n);
				} else {
					try {
						$assign(base, joinURI($($nc(n)->getValue()), base));
					} catch ($URISyntaxException& ue) {
						$nc(XmlAttrStack::LOG)->debug($(ue->getMessage()), ue);
					}
				}
			}
			if (base != nullptr && base->length() != 0) {
				$nc(baseAttr)->setValue(base);
				col->add(baseAttr);
			}
		}
	} else {
		for (; size >= 0; --size) {
			$assign(e, $cast($XmlAttrStack$XmlsStackElement, this->levels->get(size)));
			$var($Iterator, it, $nc($nc(e)->nodes)->iterator());
			while ($nc(it)->hasNext()) {
				$var($Attr, n, $cast($Attr, it->next()));
				if (!loa->containsKey($($nc(n)->getName()))) {
					loa->put($(n->getName()), n);
				}
			}
		}
	}
	$nc(this->cur)->rendered = true;
	$nc(col)->addAll($(loa->values()));
}

$String* XmlAttrStack::joinURI($String* baseURI$renamed, $String* relativeURI) {
	$init(XmlAttrStack);
	$useLocalObjectStack();
	$var($String, baseURI, baseURI$renamed);
	$var($String, bscheme, nullptr);
	$var($String, bauthority, nullptr);
	$var($String, bpath, ""_s);
	$var($String, bquery, nullptr);
	if (baseURI != nullptr) {
		if (baseURI->endsWith(".."_s)) {
			$assign(baseURI, $str({baseURI, "/"_s}));
		}
		$var($URI, base, $new($URI, baseURI));
		$assign(bscheme, base->getScheme());
		$assign(bauthority, base->getAuthority());
		$assign(bpath, base->getPath());
		$assign(bquery, base->getQuery());
	}
	$var($URI, r, $new($URI, relativeURI));
	$var($String, rscheme, r->getScheme());
	$var($String, rauthority, r->getAuthority());
	$var($String, rpath, r->getPath());
	$var($String, rquery, r->getQuery());
	$var($String, tscheme, nullptr);
	$var($String, tauthority, nullptr);
	$var($String, tpath, nullptr);
	$var($String, tquery, nullptr);
	if (rscheme != nullptr && rscheme->equals(bscheme)) {
		$assign(rscheme, nullptr);
	}
	if (rscheme != nullptr) {
		$assign(tscheme, rscheme);
		$assign(tauthority, rauthority);
		$assign(tpath, removeDotSegments(rpath));
		$assign(tquery, rquery);
	} else {
		if (rauthority != nullptr) {
			$assign(tauthority, rauthority);
			$assign(tpath, removeDotSegments(rpath));
			$assign(tquery, rquery);
		} else {
			if ($nc(rpath)->length() == 0) {
				$assign(tpath, bpath);
				if (rquery != nullptr) {
					$assign(tquery, rquery);
				} else {
					$assign(tquery, bquery);
				}
			} else {
				if (rpath->charAt(0) == u'/') {
					$assign(tpath, removeDotSegments(rpath));
				} else {
					if (bauthority != nullptr && $nc(bpath)->length() == 0) {
						$assign(tpath, $str({"/"_s, rpath}));
					} else {
						int32_t last = $nc(bpath)->lastIndexOf(u'/');
						if (last == -1) {
							$assign(tpath, rpath);
						} else {
							$assign(tpath, $str({$(bpath->substring(0, last + 1)), rpath}));
						}
					}
					$assign(tpath, removeDotSegments(tpath));
				}
				$assign(tquery, rquery);
			}
			$assign(tauthority, bauthority);
		}
		$assign(tscheme, bscheme);
	}
	return $$new($URI, tscheme, tauthority, tpath, tquery, nullptr)->toString();
}

$String* XmlAttrStack::removeDotSegments($String* path) {
	$init(XmlAttrStack);
	$useLocalObjectStack();
	$nc(XmlAttrStack::LOG)->debug("STEP OUTPUT BUFFER\t\tINPUT BUFFER"_s);
	$var($String, input, path);
	while ($nc(input)->indexOf("//"_s) > -1) {
		$assign(input, input->replaceAll("//"_s, "/"_s));
	}
	$var($StringBuilder, output, $new($StringBuilder));
	if (input->charAt(0) == u'/') {
		output->append(u'/');
		$assign(input, input->substring(1));
	}
	printStep("1 "_s, $(output->toString()), input);
	while (input->length() != 0) {
		if (input->startsWith("./"_s)) {
			$assign(input, input->substring(2));
			printStep("2A"_s, $($nc(output)->toString()), input);
		} else if (input->startsWith("../"_s)) {
			$assign(input, input->substring(3));
			if (!"/"_s->equals($($nc(output)->toString()))) {
				output->append("../"_s);
			}
			printStep("2A"_s, $(output->toString()), input);
		} else if (input->startsWith("/./"_s)) {
			$assign(input, input->substring(2));
			printStep("2B"_s, $($nc(output)->toString()), input);
		} else if ("/."_s->equals(input)) {
			$assign(input, input->replaceFirst("/."_s, "/"_s));
			printStep("2B"_s, $($nc(output)->toString()), input);
		} else if (input->startsWith("/../"_s)) {
			$assign(input, input->substring(3));
			if ($nc(output)->length() == 0) {
				output->append(u'/');
			} else if ($(output->toString())->endsWith("../"_s)) {
				output->append(".."_s);
			} else if ($(output->toString())->endsWith(".."_s)) {
				output->append("/.."_s);
			} else {
				int32_t index = output->lastIndexOf("/"_s);
				if (index == -1) {
					$assign(output, $new($StringBuilder));
					if (input->charAt(0) == u'/') {
						$assign(input, input->substring(1));
					}
				} else {
					$assign(output, output->delete$(index, output->length()));
				}
			}
			printStep("2C"_s, $($nc(output)->toString()), input);
		} else if ("/.."_s->equals(input)) {
			$assign(input, input->replaceFirst("/.."_s, "/"_s));
			if ($nc(output)->length() == 0) {
				output->append(u'/');
			} else if ($(output->toString())->endsWith("../"_s)) {
				output->append(".."_s);
			} else if ($(output->toString())->endsWith(".."_s)) {
				output->append("/.."_s);
			} else {
				int32_t index = output->lastIndexOf("/"_s);
				if (index == -1) {
					$assign(output, $new($StringBuilder));
					if (input->charAt(0) == u'/') {
						$assign(input, input->substring(1));
					}
				} else {
					$assign(output, output->delete$(index, output->length()));
				}
			}
			printStep("2C"_s, $($nc(output)->toString()), input);
		} else if ("."_s->equals(input)) {
			$assign(input, ""_s);
			printStep("2D"_s, $($nc(output)->toString()), input);
		} else if (".."_s->equals(input)) {
			if (!"/"_s->equals($($nc(output)->toString()))) {
				output->append(".."_s);
			}
			$assign(input, ""_s);
			printStep("2D"_s, $(output->toString()), input);
		} else {
			int32_t end = -1;
			int32_t begin = input->indexOf(u'/');
			if (begin == 0) {
				end = input->indexOf(u'/', 1);
			} else {
				end = begin;
				begin = 0;
			}
			$var($String, segment, nullptr);
			if (end == -1) {
				$assign(segment, input->substring(begin));
				$assign(input, ""_s);
			} else {
				$assign(segment, input->substring(begin, end));
				$assign(input, input->substring(end));
			}
			$nc(output)->append(segment);
			printStep("2E"_s, $(output->toString()), input);
		}
	}
	if ($($nc(output)->toString())->endsWith(".."_s)) {
		output->append(u'/');
		printStep("3 "_s, $(output->toString()), input);
	}
	return output->toString();
}

void XmlAttrStack::printStep($String* step, $String* output, $String* input) {
	$init(XmlAttrStack);
	$useLocalObjectStack();
	if ($nc(XmlAttrStack::LOG)->isDebugEnabled()) {
		XmlAttrStack::LOG->debug($$str({" "_s, step, ":   "_s, output}));
		if ($nc(output)->length() == 0) {
			XmlAttrStack::LOG->debug($$str({"\t\t\t\t"_s, input}));
		} else {
			XmlAttrStack::LOG->debug($$str({"\t\t\t"_s, input}));
		}
	}
}

void XmlAttrStack::clinit$($Class* clazz) {
	$assignStatic(XmlAttrStack::LOG, $LoggerFactory::getLogger(XmlAttrStack::class$));
}

XmlAttrStack::XmlAttrStack() {
}

$Class* XmlAttrStack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlAttrStack, LOG)},
		{"currentLevel", "I", nullptr, $PRIVATE, $field(XmlAttrStack, currentLevel)},
		{"lastlevel", "I", nullptr, $PRIVATE, $field(XmlAttrStack, lastlevel)},
		{"cur", "Lcom/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack$XmlsStackElement;", nullptr, $PRIVATE, $field(XmlAttrStack, cur)},
		{"levels", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack$XmlsStackElement;>;", $PRIVATE | $FINAL, $field(XmlAttrStack, levels)},
		{"c14n11", "Z", nullptr, $PRIVATE | $FINAL, $field(XmlAttrStack, c14n11)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(XmlAttrStack, init$, void, bool)},
		{"addXmlnsAttr", "(Lorg/w3c/dom/Attr;)V", nullptr, 0, $virtualMethod(XmlAttrStack, addXmlnsAttr, void, $Attr*)},
		{"getXmlnsAttr", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Lorg/w3c/dom/Attr;>;)V", 0, $virtualMethod(XmlAttrStack, getXmlnsAttr, void, $Collection*)},
		{"joinURI", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlAttrStack, joinURI, $String*, $String*, $String*), "java.net.URISyntaxException"},
		{"printStep", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlAttrStack, printStep, void, $String*, $String*, $String*)},
		{"push", "(I)V", nullptr, 0, $virtualMethod(XmlAttrStack, push, void, int32_t)},
		{"removeDotSegments", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XmlAttrStack, removeDotSegments, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement", "com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack", "XmlsStackElement", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement"
	};
	$loadClass(XmlAttrStack, name, initialize, &classInfo$$, XmlAttrStack::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XmlAttrStack);
	});
	return class$;
}

$Class* XmlAttrStack::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com