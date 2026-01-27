#include <com/sun/org/apache/xerces/internal/impl/XML11EntityScanner.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner$NameType.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <jcpp.h>

#undef COMMENT
#undef MAX_NAME_LIMIT
#undef SEVERITY_FATAL_ERROR
#undef XML_DOMAIN

using $XMLEntityScanner = ::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLScanner$NameType = ::com::sun::org::apache::xerces::internal::impl::XMLScanner$NameType;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager$Limit;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$MethodInfo _XML11EntityScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11EntityScanner, init$, void)},
	{"peekChar", "()I", nullptr, $PUBLIC, $virtualMethod(XML11EntityScanner, peekChar, int32_t), "java.io.IOException"},
	{"scanChar", "(Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)I", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanChar, int32_t, $XMLScanner$NameType*), "java.io.IOException"},
	{"scanContent", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanContent, int32_t, $XMLString*), "java.io.IOException"},
	{"scanData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;I)Z", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanData, bool, $String*, $XMLStringBuffer*, int32_t), "java.io.IOException"},
	{"scanLiteral", "(ILcom/sun/org/apache/xerces/internal/xni/XMLString;Z)I", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanLiteral, int32_t, int32_t, $XMLString*, bool), "java.io.IOException"},
	{"scanNCName", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanNCName, $String*), "java.io.IOException"},
	{"scanName", "(Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanName, $String*, $XMLScanner$NameType*), "java.io.IOException"},
	{"scanNmtoken", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanNmtoken, $String*), "java.io.IOException"},
	{"scanQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)Z", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, scanQName, bool, $QName*, $XMLScanner$NameType*), "java.io.IOException"},
	{"skipChar", "(ILcom/sun/org/apache/xerces/internal/impl/XMLScanner$NameType;)Z", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, skipChar, bool, int32_t, $XMLScanner$NameType*), "java.io.IOException"},
	{"skipSpaces", "()Z", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, skipSpaces, bool), "java.io.IOException"},
	{"skipString", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XML11EntityScanner, skipString, bool, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _XML11EntityScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XML11EntityScanner",
	"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner",
	nullptr,
	nullptr,
	_XML11EntityScanner_MethodInfo_
};

$Object* allocate$XML11EntityScanner($Class* clazz) {
	return $of($alloc(XML11EntityScanner));
}

void XML11EntityScanner::init$() {
	$XMLEntityScanner::init$();
}

int32_t XML11EntityScanner::peekChar() {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	if ($nc(this->fCurrentEntity)->isExternal()) {
		return (c != u'\r' && c != 133 && c != 8232) ? c : (int32_t)u'\n';
	} else {
		return c;
	}
}

int32_t XML11EntityScanner::scanChar($XMLScanner$NameType* nt) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
	bool external = false;
	if (c == u'\n' || ((c == u'\r' || c == 133 || c == 8232) && (external = $nc(this->fCurrentEntity)->isExternal()))) {
		++$nc(this->fCurrentEntity)->lineNumber;
		$nc(this->fCurrentEntity)->columnNumber = 1;
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)c);
			load(1, false, false);
			offset = 0;
		}
		if (c == u'\r' && external) {
			int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (cc != u'\n' && cc != 133) {
				--$nc(this->fCurrentEntity)->position;
			}
		}
		c = u'\n';
	}
	++$nc(this->fCurrentEntity)->columnNumber;
	if (!this->detectingVersion) {
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
	}
	return c;
}

$String* XML11EntityScanner::scanNmtoken() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	do {
		char16_t ch = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if ($XML11Char::isXML11Name(ch)) {
			int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
			if (var$0 == $nc(this->fCurrentEntity)->count) {
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				invokeListeners(length);
				if (length == $nc($nc(this->fCurrentEntity)->ch)->length) {
					$var($chars, tmp, $new($chars, $nc($nc(this->fCurrentEntity)->ch)->length << 1));
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
					$set($nc(this->fCurrentEntity), ch, tmp);
				} else {
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
			int32_t var$1 = ++$nc(this->fCurrentEntity)->position;
			if (var$1 == $nc(this->fCurrentEntity)->count) {
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				invokeListeners(length);
				if (length == $nc($nc(this->fCurrentEntity)->ch)->length) {
					$var($chars, tmp, $new($chars, $nc($nc(this->fCurrentEntity)->ch)->length << 1));
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
					$set($nc(this->fCurrentEntity), ch, tmp);
				} else {
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
				}
				offset = 0;
				if (load(length, false, false)) {
					--$nc(this->fCurrentEntity)->startPosition;
					--$nc(this->fCurrentEntity)->position;
					break;
				}
			}
			char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
			bool var$2 = !$XMLChar::isLowSurrogate(ch2);
			if (var$2 || !$XML11Char::isXML11Name($XMLChar::supplemental(ch, ch2))) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
			int32_t var$3 = ++$nc(this->fCurrentEntity)->position;
			if (var$3 == $nc(this->fCurrentEntity)->count) {
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				invokeListeners(length);
				if (length == $nc($nc(this->fCurrentEntity)->ch)->length) {
					$var($chars, tmp, $new($chars, $nc($nc(this->fCurrentEntity)->ch)->length << 1));
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
					$set($nc(this->fCurrentEntity), ch, tmp);
				} else {
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else {
			break;
		}
	} while (true);
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length;
	$var($String, symbol, nullptr);
	if (length > 0) {
		$assign(symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
	}
	return symbol;
}

$String* XML11EntityScanner::scanName($XMLScanner$NameType* nt) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	char16_t ch = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	if ($XML11Char::isXML11NameStart(ch)) {
		int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
		if (var$0 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			offset = 0;
			if (load(1, false, false)) {
				++$nc(this->fCurrentEntity)->columnNumber;
				$var($String, symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 1));
				return symbol;
			}
		}
	} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
		int32_t var$1 = ++$nc(this->fCurrentEntity)->position;
		if (var$1 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			offset = 0;
			if (load(1, false, false)) {
				--$nc(this->fCurrentEntity)->position;
				--$nc(this->fCurrentEntity)->startPosition;
				return nullptr;
			}
		}
		char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		bool var$2 = !$XMLChar::isLowSurrogate(ch2);
		if (var$2 || !$XML11Char::isXML11NameStart($XMLChar::supplemental(ch, ch2))) {
			--$nc(this->fCurrentEntity)->position;
			return nullptr;
		}
		int32_t var$3 = ++$nc(this->fCurrentEntity)->position;
		if (var$3 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(2);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			$nc($nc(this->fCurrentEntity)->ch)->set(1, ch2);
			offset = 0;
			if (load(2, false, false)) {
				$nc(this->fCurrentEntity)->columnNumber += 2;
				$var($String, symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 2));
				return symbol;
			}
		}
	} else {
		return nullptr;
	}
	int32_t length = 0;
	do {
		ch = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if ($XML11Char::isXML11Name(ch)) {
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, offset)) > 0) {
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, offset)) > 0) {
				offset = 0;
				if (load(length, false, false)) {
					--$nc(this->fCurrentEntity)->position;
					--$nc(this->fCurrentEntity)->startPosition;
					break;
				}
			}
			char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
			bool var$4 = !$XMLChar::isLowSurrogate(ch2);
			if (var$4 || !$XML11Char::isXML11Name($XMLChar::supplemental(ch, ch2))) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, offset)) > 0) {
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else {
			break;
		}
	} while (true);
	length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length;
	$var($String, symbol, nullptr);
	if (length > 0) {
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, length);
		checkEntityLimit(nt, this->fCurrentEntity, offset, length);
		$assign(symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
	}
	return symbol;
}

$String* XML11EntityScanner::scanNCName() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	char16_t ch = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	if ($XML11Char::isXML11NCNameStart(ch)) {
		int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
		if (var$0 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			offset = 0;
			if (load(1, false, false)) {
				++$nc(this->fCurrentEntity)->columnNumber;
				$var($String, symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 1));
				return symbol;
			}
		}
	} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
		int32_t var$1 = ++$nc(this->fCurrentEntity)->position;
		if (var$1 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			offset = 0;
			if (load(1, false, false)) {
				--$nc(this->fCurrentEntity)->position;
				--$nc(this->fCurrentEntity)->startPosition;
				return nullptr;
			}
		}
		char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		bool var$2 = !$XMLChar::isLowSurrogate(ch2);
		if (var$2 || !$XML11Char::isXML11NCNameStart($XMLChar::supplemental(ch, ch2))) {
			--$nc(this->fCurrentEntity)->position;
			return nullptr;
		}
		int32_t var$3 = ++$nc(this->fCurrentEntity)->position;
		if (var$3 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(2);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			$nc($nc(this->fCurrentEntity)->ch)->set(1, ch2);
			offset = 0;
			if (load(2, false, false)) {
				$nc(this->fCurrentEntity)->columnNumber += 2;
				$var($String, symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 2));
				return symbol;
			}
		}
	} else {
		return nullptr;
	}
	do {
		ch = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if ($XML11Char::isXML11NCName(ch)) {
			int32_t var$4 = ++$nc(this->fCurrentEntity)->position;
			if (var$4 == $nc(this->fCurrentEntity)->count) {
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				invokeListeners(length);
				if (length == $nc($nc(this->fCurrentEntity)->ch)->length) {
					$var($chars, tmp, $new($chars, $nc($nc(this->fCurrentEntity)->ch)->length << 1));
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
					$set($nc(this->fCurrentEntity), ch, tmp);
				} else {
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
			int32_t var$5 = ++$nc(this->fCurrentEntity)->position;
			if (var$5 == $nc(this->fCurrentEntity)->count) {
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				invokeListeners(length);
				if (length == $nc($nc(this->fCurrentEntity)->ch)->length) {
					$var($chars, tmp, $new($chars, $nc($nc(this->fCurrentEntity)->ch)->length << 1));
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
					$set($nc(this->fCurrentEntity), ch, tmp);
				} else {
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
				}
				offset = 0;
				if (load(length, false, false)) {
					--$nc(this->fCurrentEntity)->startPosition;
					--$nc(this->fCurrentEntity)->position;
					break;
				}
			}
			char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
			bool var$6 = !$XMLChar::isLowSurrogate(ch2);
			if (var$6 || !$XML11Char::isXML11NCName($XMLChar::supplemental(ch, ch2))) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
			int32_t var$7 = ++$nc(this->fCurrentEntity)->position;
			if (var$7 == $nc(this->fCurrentEntity)->count) {
				int32_t length = $nc(this->fCurrentEntity)->position - offset;
				invokeListeners(length);
				if (length == $nc($nc(this->fCurrentEntity)->ch)->length) {
					$var($chars, tmp, $new($chars, $nc($nc(this->fCurrentEntity)->ch)->length << 1));
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, tmp, 0, length);
					$set($nc(this->fCurrentEntity), ch, tmp);
				} else {
					$System::arraycopy($nc(this->fCurrentEntity)->ch, offset, $nc(this->fCurrentEntity)->ch, 0, length);
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else {
			break;
		}
	} while (true);
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length;
	$var($String, symbol, nullptr);
	if (length > 0) {
		$assign(symbol, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
	}
	return symbol;
}

bool XML11EntityScanner::scanQName($QName* qname, $XMLScanner$NameType* nt) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	char16_t ch = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	if ($XML11Char::isXML11NCNameStart(ch)) {
		int32_t var$0 = ++$nc(this->fCurrentEntity)->position;
		if (var$0 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			offset = 0;
			if (load(1, false, false)) {
				++$nc(this->fCurrentEntity)->columnNumber;
				$var($String, name, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 1));
				$nc(qname)->setValues(nullptr, name, name, nullptr);
				checkEntityLimit(nt, this->fCurrentEntity, 0, 1);
				return true;
			}
		}
	} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
		int32_t var$1 = ++$nc(this->fCurrentEntity)->position;
		if (var$1 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			offset = 0;
			if (load(1, false, false)) {
				--$nc(this->fCurrentEntity)->startPosition;
				--$nc(this->fCurrentEntity)->position;
				return false;
			}
		}
		char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		bool var$2 = !$XMLChar::isLowSurrogate(ch2);
		if (var$2 || !$XML11Char::isXML11NCNameStart($XMLChar::supplemental(ch, ch2))) {
			--$nc(this->fCurrentEntity)->position;
			return false;
		}
		int32_t var$3 = ++$nc(this->fCurrentEntity)->position;
		if (var$3 == $nc(this->fCurrentEntity)->count) {
			invokeListeners(2);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, ch);
			$nc($nc(this->fCurrentEntity)->ch)->set(1, ch2);
			offset = 0;
			if (load(2, false, false)) {
				$nc(this->fCurrentEntity)->columnNumber += 2;
				$var($String, name, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, 0, 2));
				$nc(qname)->setValues(nullptr, name, name, nullptr);
				checkEntityLimit(nt, this->fCurrentEntity, 0, 2);
				return true;
			}
		}
	} else {
		return false;
	}
	int32_t index = -1;
	int32_t length = 0;
	bool sawIncompleteSurrogatePair = false;
	do {
		ch = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if ($XML11Char::isXML11Name(ch)) {
			if (ch == u':') {
				if (index != -1) {
					break;
				}
				index = $nc(this->fCurrentEntity)->position;
				$init($XMLSecurityManager$Limit);
				checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, index - offset);
			}
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, index)) > 0) {
				if (index != -1) {
					index = index - offset;
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else if ($XML11Char::isXML11NameHighSurrogate(ch)) {
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, index)) > 0) {
				if (index != -1) {
					index = index - offset;
				}
				offset = 0;
				if (load(length, false, false)) {
					sawIncompleteSurrogatePair = true;
					--$nc(this->fCurrentEntity)->startPosition;
					--$nc(this->fCurrentEntity)->position;
					break;
				}
			}
			char16_t ch2 = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
			bool var$4 = !$XMLChar::isLowSurrogate(ch2);
			if (var$4 || !$XML11Char::isXML11Name($XMLChar::supplemental(ch, ch2))) {
				sawIncompleteSurrogatePair = true;
				--$nc(this->fCurrentEntity)->position;
				break;
			}
			if ((length = checkBeforeLoad(this->fCurrentEntity, offset, index)) > 0) {
				if (index != -1) {
					index = index - offset;
				}
				offset = 0;
				if (load(length, false, false)) {
					break;
				}
			}
		} else {
			break;
		}
	} while (true);
	length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length;
	if (length > 0) {
		$var($String, prefix, nullptr);
		$var($String, localpart, nullptr);
		$var($String, rawname, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, length));
		if (index != -1) {
			int32_t prefixLength = index - offset;
			$init($XMLSecurityManager$Limit);
			checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, prefixLength);
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, offset, prefixLength));
			int32_t len = length - prefixLength - 1;
			int32_t startLocal = index + 1;
			bool var$5 = !$XML11Char::isXML11NCNameStart($nc($nc(this->fCurrentEntity)->ch)->get(startLocal));
			if (var$5 && (!$XML11Char::isXML11NameHighSurrogate($nc($nc(this->fCurrentEntity)->ch)->get(startLocal)) || sawIncompleteSurrogatePair)) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "IllegalQName"_s, $$new($ObjectArray, {$of(rawname)}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
			}
			checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, index + 1, len);
			$assign(localpart, $nc(this->fSymbolTable)->addSymbol($nc(this->fCurrentEntity)->ch, index + 1, len));
		} else {
			$assign(localpart, rawname);
			$init($XMLSecurityManager$Limit);
			checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, length);
		}
		$nc(qname)->setValues(prefix, localpart, rawname, nullptr);
		checkEntityLimit(nt, this->fCurrentEntity, offset, length);
		return true;
	}
	return false;
}

int32_t XML11EntityScanner::scanContent($XMLString* content) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	} else if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
		invokeListeners(1);
		$nc($nc(this->fCurrentEntity)->ch)->set(0, $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->count - 1));
		load(1, false, false);
		$nc(this->fCurrentEntity)->position = 0;
		$nc(this->fCurrentEntity)->startPosition = 0;
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	int32_t newlines = 0;
	bool counted = false;
	bool external = $nc(this->fCurrentEntity)->isExternal();
	if (c == u'\n' || ((c == u'\r' || c == 133 || c == 8232) && external)) {
		do {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if ((c == u'\r') && external) {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					checkEntityLimit(nullptr, this->fCurrentEntity, offset, newlines);
					offset = 0;
					$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
					$nc(this->fCurrentEntity)->position = newlines;
					$nc(this->fCurrentEntity)->startPosition = newlines;
					if (load(newlines, false, true)) {
						counted = true;
						break;
					}
				}
				int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
				if (cc == u'\n' || cc == 133) {
					++$nc(this->fCurrentEntity)->position;
					++offset;
				} else {
					++newlines;
				}
			} else if (c == u'\n' || ((c == 133 || c == 8232) && external)) {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					checkEntityLimit(nullptr, this->fCurrentEntity, offset, newlines);
					offset = 0;
					$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
					$nc(this->fCurrentEntity)->position = newlines;
					$nc(this->fCurrentEntity)->startPosition = newlines;
					if (load(newlines, false, true)) {
						counted = true;
						break;
					}
				}
			} else {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		} while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count - 1);
		for (int32_t i = offset; i < $nc(this->fCurrentEntity)->position; ++i) {
			$nc($nc(this->fCurrentEntity)->ch)->set(i, u'\n');
		}
		int32_t length = $nc(this->fCurrentEntity)->position - offset;
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
			checkEntityLimit(nullptr, this->fCurrentEntity, offset, length);
			$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
			return -1;
		}
	}
	if (external) {
		while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (!$XML11Char::isXML11Content(c) || c == 133 || c == 8232) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		}
	} else {
		while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (!$XML11Char::isXML11InternalEntityContent(c)) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		}
	}
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length - newlines;
	if (!counted) {
		checkEntityLimit(nullptr, this->fCurrentEntity, offset, length);
	}
	$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
	if ($nc(this->fCurrentEntity)->position != $nc(this->fCurrentEntity)->count) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if ((c == u'\r' || c == 133 || c == 8232) && external) {
			c = u'\n';
		}
	} else {
		c = -1;
	}
	return c;
}

int32_t XML11EntityScanner::scanLiteral(int32_t quote, $XMLString* content, bool isNSURI) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	} else if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
		invokeListeners(1);
		$nc($nc(this->fCurrentEntity)->ch)->set(0, $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->count - 1));
		load(1, false, false);
		$nc(this->fCurrentEntity)->startPosition = 0;
		$nc(this->fCurrentEntity)->position = 0;
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
	int32_t newlines = 0;
	bool external = $nc(this->fCurrentEntity)->isExternal();
	if (c == u'\n' || ((c == u'\r' || c == 133 || c == 8232) && external)) {
		do {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if ((c == u'\r') && external) {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					offset = 0;
					$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
					$nc(this->fCurrentEntity)->position = newlines;
					$nc(this->fCurrentEntity)->startPosition = newlines;
					if (load(newlines, false, true)) {
						break;
					}
				}
				int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
				if (cc == u'\n' || cc == 133) {
					++$nc(this->fCurrentEntity)->position;
					++offset;
				} else {
					++newlines;
				}
			} else if (c == u'\n' || ((c == 133 || c == 8232) && external)) {
				++newlines;
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					offset = 0;
					$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
					$nc(this->fCurrentEntity)->position = newlines;
					$nc(this->fCurrentEntity)->startPosition = newlines;
					if (load(newlines, false, true)) {
						break;
					}
				}
			} else {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		} while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count - 1);
		for (int32_t i = offset; i < $nc(this->fCurrentEntity)->position; ++i) {
			$nc($nc(this->fCurrentEntity)->ch)->set(i, u'\n');
		}
		int32_t length = $nc(this->fCurrentEntity)->position - offset;
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
			$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
			return -1;
		}
	}
	if (external) {
		while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (c == quote || c == u'%' || !$XML11Char::isXML11Content(c) || c == 133 || c == 8232) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		}
	} else {
		while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if ((c == quote && !$nc(this->fCurrentEntity)->literal) || c == u'%' || !$XML11Char::isXML11InternalEntityContent(c)) {
				--$nc(this->fCurrentEntity)->position;
				break;
			}
		}
	}
	int32_t length = $nc(this->fCurrentEntity)->position - offset;
	$nc(this->fCurrentEntity)->columnNumber += length - newlines;
	checkEntityLimit(nullptr, this->fCurrentEntity, offset, length);
	if (isNSURI) {
		$init($XMLSecurityManager$Limit);
		checkLimit($XMLSecurityManager$Limit::MAX_NAME_LIMIT, this->fCurrentEntity, offset, length);
	}
	$nc(content)->setValues($nc(this->fCurrentEntity)->ch, offset, length);
	if ($nc(this->fCurrentEntity)->position != $nc(this->fCurrentEntity)->count) {
		c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
		if (c == quote && $nc(this->fCurrentEntity)->literal) {
			c = -1;
		}
	} else {
		c = -1;
	}
	return c;
}

bool XML11EntityScanner::scanData($String* delimiter, $XMLStringBuffer* buffer, int32_t chunkLimit) {
	bool done = false;
	int32_t delimLen = $nc(delimiter)->length();
	char16_t charAt0 = delimiter->charAt(0);
	bool external = $nc(this->fCurrentEntity)->isExternal();
	do {
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			load(0, true, false);
		}
		bool bNextEntity = false;
		while (($nc(this->fCurrentEntity)->position >= $nc(this->fCurrentEntity)->count - delimLen) && (!bNextEntity)) {
			$System::arraycopy($nc(this->fCurrentEntity)->ch, $nc(this->fCurrentEntity)->position, $nc(this->fCurrentEntity)->ch, 0, $nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position);
			bNextEntity = load($nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position, false, false);
			$nc(this->fCurrentEntity)->position = 0;
			$nc(this->fCurrentEntity)->startPosition = 0;
		}
		if ($nc(this->fCurrentEntity)->position >= $nc(this->fCurrentEntity)->count - delimLen) {
			int32_t length = $nc(this->fCurrentEntity)->count - $nc(this->fCurrentEntity)->position;
			$init($XMLScanner$NameType);
			checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, $nc(this->fCurrentEntity)->position, length);
			$nc(buffer)->append($nc(this->fCurrentEntity)->ch, $nc(this->fCurrentEntity)->position, length);
			$nc(this->fCurrentEntity)->columnNumber += $nc(this->fCurrentEntity)->count;
			$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
			$nc(this->fCurrentEntity)->position = $nc(this->fCurrentEntity)->count;
			$nc(this->fCurrentEntity)->startPosition = $nc(this->fCurrentEntity)->count;
			load(0, true, false);
			return false;
		}
		int32_t offset = $nc(this->fCurrentEntity)->position;
		int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get(offset);
		int32_t newlines = 0;
		if (c == u'\n' || ((c == u'\r' || c == 133 || c == 8232) && external)) {
			do {
				c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
				if ((c == u'\r') && external) {
					++newlines;
					++$nc(this->fCurrentEntity)->lineNumber;
					$nc(this->fCurrentEntity)->columnNumber = 1;
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
						offset = 0;
						$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
						$nc(this->fCurrentEntity)->position = newlines;
						$nc(this->fCurrentEntity)->startPosition = newlines;
						if (load(newlines, false, true)) {
							break;
						}
					}
					int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
					if (cc == u'\n' || cc == 133) {
						++$nc(this->fCurrentEntity)->position;
						++offset;
					} else {
						++newlines;
					}
				} else if (c == u'\n' || ((c == 133 || c == 8232) && external)) {
					++newlines;
					++$nc(this->fCurrentEntity)->lineNumber;
					$nc(this->fCurrentEntity)->columnNumber = 1;
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
						offset = 0;
						$nc(this->fCurrentEntity)->baseCharOffset += ($nc(this->fCurrentEntity)->position - $nc(this->fCurrentEntity)->startPosition);
						$nc(this->fCurrentEntity)->position = newlines;
						$nc(this->fCurrentEntity)->startPosition = newlines;
						$nc(this->fCurrentEntity)->count = newlines;
						if (load(newlines, false, true)) {
							break;
						}
					}
				} else {
					--$nc(this->fCurrentEntity)->position;
					break;
				}
			} while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count - 1);
			for (int32_t i = offset; i < $nc(this->fCurrentEntity)->position; ++i) {
				$nc($nc(this->fCurrentEntity)->ch)->set(i, u'\n');
			}
			int32_t length = $nc(this->fCurrentEntity)->position - offset;
			if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
				$init($XMLScanner$NameType);
				checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, offset, length);
				$nc(buffer)->append($nc(this->fCurrentEntity)->ch, offset, length);
				return true;
			}
		}
		bool OUTER$break = false;
		while ($nc(this->fCurrentEntity)->position < $nc(this->fCurrentEntity)->count) {
			c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
			if (c == charAt0) {
				int32_t delimOffset = $nc(this->fCurrentEntity)->position - 1;
				for (int32_t i = 1; i < delimLen; ++i) {
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
						$nc(this->fCurrentEntity)->position -= i;
						OUTER$break = true;
						break;
					}
					c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
					if (delimiter->charAt(i) != c) {
						--$nc(this->fCurrentEntity)->position;
						break;
					}
				}
				if (OUTER$break) {
					break;
				}
				if ($nc(this->fCurrentEntity)->position == delimOffset + delimLen) {
					done = true;
					break;
				}
			} else if ((external && (c == u'\n' || c == u'\r' || c == 133 || c == 8232)) || (!external && c == u'\n')) {
				--$nc(this->fCurrentEntity)->position;
				break;
			} else {
				bool var$1 = (external && !$XML11Char::isXML11ValidLiteral(c));
				if (var$1 || (!external && !$XML11Char::isXML11Valid(c))) {
					--$nc(this->fCurrentEntity)->position;
					int32_t length = $nc(this->fCurrentEntity)->position - offset;
					$nc(this->fCurrentEntity)->columnNumber += length - newlines;
					$init($XMLScanner$NameType);
					checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, offset, length);
					$nc(buffer)->append($nc(this->fCurrentEntity)->ch, offset, length);
					return true;
				}
			}
			if (chunkLimit > 0 && ($nc(buffer)->length + $nc(this->fCurrentEntity)->position - offset) >= chunkLimit) {
				break;
			}
		}
		int32_t length = $nc(this->fCurrentEntity)->position - offset;
		$nc(this->fCurrentEntity)->columnNumber += length - newlines;
		$init($XMLScanner$NameType);
		checkEntityLimit($XMLScanner$NameType::COMMENT, this->fCurrentEntity, offset, length);
		if (done) {
			length -= delimLen;
		}
		$nc(buffer)->append($nc(this->fCurrentEntity)->ch, offset, length);
		if (chunkLimit > 0 && buffer->length >= chunkLimit) {
			break;
		}
	} while (!done && chunkLimit == 0);
	return !done;
}

bool XML11EntityScanner::skipChar(int32_t c, $XMLScanner$NameType* nt) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t offset = $nc(this->fCurrentEntity)->position;
	int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	if (cc == c) {
		++$nc(this->fCurrentEntity)->position;
		if (c == u'\n') {
			++$nc(this->fCurrentEntity)->lineNumber;
			$nc(this->fCurrentEntity)->columnNumber = 1;
		} else {
			++$nc(this->fCurrentEntity)->columnNumber;
		}
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
		return true;
	} else if (c == u'\n' && ((cc == 8232 || cc == 133) && $nc(this->fCurrentEntity)->isExternal())) {
		++$nc(this->fCurrentEntity)->position;
		++$nc(this->fCurrentEntity)->lineNumber;
		$nc(this->fCurrentEntity)->columnNumber = 1;
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
		return true;
	} else if (c == u'\n' && (cc == u'\r') && $nc(this->fCurrentEntity)->isExternal()) {
		if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			invokeListeners(1);
			$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)cc);
			load(1, false, false);
		}
		int32_t ccc = $nc($nc(this->fCurrentEntity)->ch)->get(++$nc(this->fCurrentEntity)->position);
		if (ccc == u'\n' || ccc == 133) {
			++$nc(this->fCurrentEntity)->position;
		}
		++$nc(this->fCurrentEntity)->lineNumber;
		$nc(this->fCurrentEntity)->columnNumber = 1;
		checkEntityLimit(nt, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
		return true;
	}
	return false;
}

bool XML11EntityScanner::skipSpaces() {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	if (this->fCurrentEntity == nullptr) {
		return false;
	}
	int32_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position);
	int32_t offset = $nc(this->fCurrentEntity)->position - 1;
	if ($nc(this->fCurrentEntity)->isExternal()) {
		if ($XML11Char::isXML11Space(c)) {
			do {
				bool entityChanged = false;
				if (c == u'\n' || c == u'\r' || c == 133 || c == 8232) {
					++$nc(this->fCurrentEntity)->lineNumber;
					$nc(this->fCurrentEntity)->columnNumber = 1;
					if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
						invokeListeners(1);
						$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)c);
						entityChanged = load(1, true, false);
						if (!entityChanged) {
							$nc(this->fCurrentEntity)->startPosition = 0;
							$nc(this->fCurrentEntity)->position = 0;
						} else if (this->fCurrentEntity == nullptr) {
							return true;
						}
					}
					if (c == u'\r') {
						int32_t cc = $nc($nc(this->fCurrentEntity)->ch)->get(++$nc(this->fCurrentEntity)->position);
						if (cc != u'\n' && cc != 133) {
							--$nc(this->fCurrentEntity)->position;
						}
					}
				} else {
					++$nc(this->fCurrentEntity)->columnNumber;
				}
				checkEntityLimit(nullptr, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
				offset = $nc(this->fCurrentEntity)->position;
				if (!entityChanged) {
					++$nc(this->fCurrentEntity)->position;
				}
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
					load(0, true, true);
					if (this->fCurrentEntity == nullptr) {
						return true;
					}
				}
			} while ($XML11Char::isXML11Space(c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position)));
			return true;
		}
	} else if ($XMLChar::isSpace(c)) {
		do {
			bool entityChanged = false;
			if (c == u'\n') {
				++$nc(this->fCurrentEntity)->lineNumber;
				$nc(this->fCurrentEntity)->columnNumber = 1;
				if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count - 1) {
					invokeListeners(1);
					$nc($nc(this->fCurrentEntity)->ch)->set(0, (char16_t)c);
					entityChanged = load(1, true, false);
					if (!entityChanged) {
						$nc(this->fCurrentEntity)->startPosition = 0;
						$nc(this->fCurrentEntity)->position = 0;
					} else if (this->fCurrentEntity == nullptr) {
						return true;
					}
				}
			} else {
				++$nc(this->fCurrentEntity)->columnNumber;
			}
			checkEntityLimit(nullptr, this->fCurrentEntity, offset, $nc(this->fCurrentEntity)->position - offset);
			offset = $nc(this->fCurrentEntity)->position;
			if (!entityChanged) {
				++$nc(this->fCurrentEntity)->position;
			}
			if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
				load(0, true, true);
				if (this->fCurrentEntity == nullptr) {
					return true;
				}
			}
		} while ($XMLChar::isSpace(c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position)));
		return true;
	}
	return false;
}

bool XML11EntityScanner::skipString($String* s) {
	if ($nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
		load(0, true, true);
	}
	int32_t length = $nc(s)->length();
	int32_t beforeSkip = $nc(this->fCurrentEntity)->position;
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = $nc($nc(this->fCurrentEntity)->ch)->get($nc(this->fCurrentEntity)->position++);
		if (c != s->charAt(i)) {
			$nc(this->fCurrentEntity)->position -= i + 1;
			return false;
		}
		if (i < length - 1 && $nc(this->fCurrentEntity)->position == $nc(this->fCurrentEntity)->count) {
			invokeListeners(0);
			$System::arraycopy($nc(this->fCurrentEntity)->ch, $nc(this->fCurrentEntity)->count - i - 1, $nc(this->fCurrentEntity)->ch, 0, i + 1);
			if (load(i + 1, false, false)) {
				$nc(this->fCurrentEntity)->startPosition -= i + 1;
				$nc(this->fCurrentEntity)->position -= i + 1;
				return false;
			}
		}
	}
	$nc(this->fCurrentEntity)->columnNumber += length;
	if (!this->detectingVersion) {
		checkEntityLimit(nullptr, this->fCurrentEntity, beforeSkip, length);
	}
	return true;
}

XML11EntityScanner::XML11EntityScanner() {
}

$Class* XML11EntityScanner::load$($String* name, bool initialize) {
	$loadClass(XML11EntityScanner, name, initialize, &_XML11EntityScanner_ClassInfo_, allocate$XML11EntityScanner);
	return class$;
}

$Class* XML11EntityScanner::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com