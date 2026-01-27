#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$1.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Scanner.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ShortHandPointer.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerPart.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef EVENT_ELEMENT_EMPTY
#undef EVENT_ELEMENT_END
#undef EVENT_ELEMENT_START
#undef XPOINTER_DOMAIN
#undef XPTRTOKEN_ELEM_CHILD
#undef XPTRTOKEN_ELEM_NCNAME

using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $ElementSchemePointer$1 = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$1;
using $ElementSchemePointer$Scanner = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Scanner;
using $ElementSchemePointer$Tokens = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Tokens;
using $ShortHandPointer = ::com::sun::org::apache::xerces::internal::xpointer::ShortHandPointer;
using $XPointerErrorHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerErrorHandler;
using $XPointerMessageFormatter = ::com::sun::org::apache::xerces::internal::xpointer::XPointerMessageFormatter;
using $XPointerPart = ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _ElementSchemePointer_FieldInfo_[] = {
	{"fSchemeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ElementSchemePointer, fSchemeName)},
	{"fSchemeData", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ElementSchemePointer, fSchemeData)},
	{"fShortHandPointerName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ElementSchemePointer, fShortHandPointerName)},
	{"fIsResolveElement", "Z", nullptr, $PRIVATE, $field(ElementSchemePointer, fIsResolveElement)},
	{"fIsElementFound", "Z", nullptr, $PRIVATE, $field(ElementSchemePointer, fIsElementFound)},
	{"fWasOnlyEmptyElementFound", "Z", nullptr, $PRIVATE, $field(ElementSchemePointer, fWasOnlyEmptyElementFound)},
	{"fIsShortHand", "Z", nullptr, 0, $field(ElementSchemePointer, fIsShortHand)},
	{"fFoundDepth", "I", nullptr, 0, $field(ElementSchemePointer, fFoundDepth)},
	{"fChildSequence", "[I", nullptr, $PRIVATE, $field(ElementSchemePointer, fChildSequence)},
	{"fCurrentChildPosition", "I", nullptr, $PRIVATE, $field(ElementSchemePointer, fCurrentChildPosition)},
	{"fCurrentChildDepth", "I", nullptr, $PRIVATE, $field(ElementSchemePointer, fCurrentChildDepth)},
	{"fCurrentChildSequence", "[I", nullptr, $PRIVATE, $field(ElementSchemePointer, fCurrentChildSequence)},
	{"fIsFragmentResolved", "Z", nullptr, $PRIVATE, $field(ElementSchemePointer, fIsFragmentResolved)},
	{"fShortHandPointer", "Lcom/sun/org/apache/xerces/internal/xpointer/ShortHandPointer;", nullptr, $PRIVATE, $field(ElementSchemePointer, fShortHandPointer)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(ElementSchemePointer, fErrorReporter)},
	{"fErrorHandler", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $field(ElementSchemePointer, fErrorHandler)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(ElementSchemePointer, fSymbolTable)},
	{}
};

$MethodInfo _ElementSchemePointer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ElementSchemePointer, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(ElementSchemePointer, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PUBLIC, $method(ElementSchemePointer, init$, void, $SymbolTable*, $XMLErrorReporter*)},
	{"checkMatch", "()Z", nullptr, $PROTECTED, $method(ElementSchemePointer, checkMatch, bool)},
	{"getSchemeData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, getSchemeData, $String*)},
	{"getSchemeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, getSchemeName, $String*)},
	{"init", "()V", nullptr, $PROTECTED, $method(ElementSchemePointer, init, void)},
	{"initErrorReporter", "()V", nullptr, $PROTECTED, $method(ElementSchemePointer, initErrorReporter, void)},
	{"isChildFragmentResolved", "()Z", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, isChildFragmentResolved, bool)},
	{"isFragmentResolved", "()Z", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, isFragmentResolved, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"matchChildSequence", "(Lcom/sun/org/apache/xerces/internal/xni/QName;I)Z", nullptr, $PROTECTED, $method(ElementSchemePointer, matchChildSequence, bool, $QName*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parseXPointer", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, parseXPointer, void, $String*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED, $method(ElementSchemePointer, reportError, void, $String*, $ObjectArray*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveXPointer", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;I)Z", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, resolveXPointer, bool, $QName*, $XMLAttributes*, $Augmentations*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setSchemeData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, setSchemeData, void, $String*)},
	{"setSchemeName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementSchemePointer, setSchemeName, void, $String*)},
	{}
};

$InnerClassInfo _ElementSchemePointer_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner", "com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer", "Scanner", $PRIVATE},
	{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Tokens", "com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer", "Tokens", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ElementSchemePointer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xpointer.XPointerPart",
	_ElementSchemePointer_FieldInfo_,
	_ElementSchemePointer_MethodInfo_,
	nullptr,
	nullptr,
	_ElementSchemePointer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner,com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Tokens,com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$1"
};

$Object* allocate$ElementSchemePointer($Class* clazz) {
	return $of($alloc(ElementSchemePointer));
}

void ElementSchemePointer::init$() {
	this->fIsResolveElement = false;
	this->fIsElementFound = false;
	this->fWasOnlyEmptyElementFound = false;
	this->fIsShortHand = false;
	this->fFoundDepth = 0;
	this->fCurrentChildPosition = 1;
	this->fCurrentChildDepth = 0;
	this->fIsFragmentResolved = false;
}

void ElementSchemePointer::init$($SymbolTable* symbolTable) {
	this->fIsResolveElement = false;
	this->fIsElementFound = false;
	this->fWasOnlyEmptyElementFound = false;
	this->fIsShortHand = false;
	this->fFoundDepth = 0;
	this->fCurrentChildPosition = 1;
	this->fCurrentChildDepth = 0;
	this->fIsFragmentResolved = false;
	$set(this, fSymbolTable, symbolTable);
}

void ElementSchemePointer::init$($SymbolTable* symbolTable, $XMLErrorReporter* errorReporter) {
	this->fIsResolveElement = false;
	this->fIsElementFound = false;
	this->fWasOnlyEmptyElementFound = false;
	this->fIsShortHand = false;
	this->fFoundDepth = 0;
	this->fCurrentChildPosition = 1;
	this->fCurrentChildDepth = 0;
	this->fIsFragmentResolved = false;
	$set(this, fSymbolTable, symbolTable);
	$set(this, fErrorReporter, errorReporter);
}

void ElementSchemePointer::parseXPointer($String* xpointer) {
	$useLocalCurrentObjectStackCache();
	init();
	$var($ElementSchemePointer$Tokens, tokens, $new($ElementSchemePointer$Tokens, this, this->fSymbolTable));
	$var($ElementSchemePointer$Scanner, scanner, $new($ElementSchemePointer$1, this, this->fSymbolTable));
	int32_t length = $nc(xpointer)->length();
	bool success = scanner->scanExpr(this->fSymbolTable, tokens, xpointer, 0, length);
	if (!success) {
		reportError("InvalidElementSchemeXPointer"_s, $$new($ObjectArray, {$of(xpointer)}));
	}
	$var($ints, tmpChildSequence, $new($ints, tokens->getTokenCount() / 2 + 1));
	int32_t i = 0;
	while (tokens->hasMore()) {
		int32_t token = tokens->nextToken();
		switch (token) {
		case $ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_NCNAME:
			{
				{
					token = tokens->nextToken();
					$set(this, fShortHandPointerName, tokens->getTokenString(token));
					$set(this, fShortHandPointer, $new($ShortHandPointer, this->fSymbolTable));
					$nc(this->fShortHandPointer)->setSchemeName(this->fShortHandPointerName);
					break;
				}
			}
		case $ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_CHILD:
			{
				{
					tmpChildSequence->set(i, tokens->nextToken());
					++i;
					break;
				}
			}
		default:
			{
				reportError("InvalidElementSchemeXPointer"_s, $$new($ObjectArray, {$of(xpointer)}));
			}
		}
	}
	$set(this, fChildSequence, $new($ints, i));
	$set(this, fCurrentChildSequence, $new($ints, i));
	$System::arraycopy(tmpChildSequence, 0, this->fChildSequence, 0, i);
}

$String* ElementSchemePointer::getSchemeName() {
	return this->fSchemeName;
}

$String* ElementSchemePointer::getSchemeData() {
	return this->fSchemeData;
}

void ElementSchemePointer::setSchemeName($String* schemeName) {
	$set(this, fSchemeName, schemeName);
}

void ElementSchemePointer::setSchemeData($String* schemeData) {
	$set(this, fSchemeData, schemeData);
}

bool ElementSchemePointer::resolveXPointer($QName* element, $XMLAttributes* attributes, $Augmentations* augs, int32_t event) {
	bool isShortHandPointerResolved = false;
	if (this->fShortHandPointerName != nullptr) {
		isShortHandPointerResolved = $nc(this->fShortHandPointer)->resolveXPointer(element, attributes, augs, event);
		if (isShortHandPointerResolved) {
			this->fIsResolveElement = true;
			this->fIsShortHand = true;
		} else {
			this->fIsResolveElement = false;
		}
	} else {
		this->fIsResolveElement = true;
	}
	if ($nc(this->fChildSequence)->length > 0) {
		this->fIsFragmentResolved = matchChildSequence(element, event);
	} else if (isShortHandPointerResolved && $nc(this->fChildSequence)->length <= 0) {
		this->fIsFragmentResolved = isShortHandPointerResolved;
	} else {
		this->fIsFragmentResolved = false;
	}
	return this->fIsFragmentResolved;
}

bool ElementSchemePointer::matchChildSequence($QName* element, int32_t event) {
	if (this->fCurrentChildDepth >= $nc(this->fCurrentChildSequence)->length) {
		$var($ints, tmpCurrentChildSequence, $new($ints, $nc(this->fCurrentChildSequence)->length));
		$System::arraycopy(this->fCurrentChildSequence, 0, tmpCurrentChildSequence, 0, $nc(this->fCurrentChildSequence)->length);
		$set(this, fCurrentChildSequence, $new($ints, this->fCurrentChildDepth * 2));
		$System::arraycopy(tmpCurrentChildSequence, 0, this->fCurrentChildSequence, 0, tmpCurrentChildSequence->length);
	}
	if (this->fIsResolveElement) {
		this->fWasOnlyEmptyElementFound = false;
		if (event == $XPointerPart::EVENT_ELEMENT_START) {
			$nc(this->fCurrentChildSequence)->set(this->fCurrentChildDepth, this->fCurrentChildPosition);
			++this->fCurrentChildDepth;
			this->fCurrentChildPosition = 1;
			if ((this->fCurrentChildDepth <= this->fFoundDepth) || (this->fFoundDepth == 0)) {
				if (checkMatch()) {
					this->fIsElementFound = true;
					this->fFoundDepth = this->fCurrentChildDepth;
				} else {
					this->fIsElementFound = false;
					this->fFoundDepth = 0;
				}
			}
		} else if (event == $XPointerPart::EVENT_ELEMENT_END) {
			if (this->fCurrentChildDepth == this->fFoundDepth) {
				this->fIsElementFound = true;
			} else if (((this->fCurrentChildDepth < this->fFoundDepth) && (this->fFoundDepth != 0)) || ((this->fCurrentChildDepth > this->fFoundDepth) && (this->fFoundDepth == 0))) {
				this->fIsElementFound = false;
			}
			$nc(this->fCurrentChildSequence)->set(this->fCurrentChildDepth, 0);
			--this->fCurrentChildDepth;
			this->fCurrentChildPosition = $nc(this->fCurrentChildSequence)->get(this->fCurrentChildDepth) + 1;
		} else if (event == $XPointerPart::EVENT_ELEMENT_EMPTY) {
			$nc(this->fCurrentChildSequence)->set(this->fCurrentChildDepth, this->fCurrentChildPosition);
			++this->fCurrentChildPosition;
			if (checkMatch()) {
				if (!this->fIsElementFound) {
					this->fWasOnlyEmptyElementFound = true;
				} else {
					this->fWasOnlyEmptyElementFound = false;
				}
				this->fIsElementFound = true;
			} else {
				this->fIsElementFound = false;
				this->fWasOnlyEmptyElementFound = false;
			}
		}
	}
	return this->fIsElementFound;
}

bool ElementSchemePointer::checkMatch() {
	if (!this->fIsShortHand) {
		if ($nc(this->fChildSequence)->length <= this->fCurrentChildDepth + 1) {
			for (int32_t i = 0; i < $nc(this->fChildSequence)->length; ++i) {
				if ($nc(this->fChildSequence)->get(i) != $nc(this->fCurrentChildSequence)->get(i)) {
					return false;
				}
			}
		} else {
			return false;
		}
	} else if ($nc(this->fChildSequence)->length <= this->fCurrentChildDepth + 1) {
		for (int32_t i = 0; i < $nc(this->fChildSequence)->length; ++i) {
			if ($nc(this->fCurrentChildSequence)->length < i + 2) {
				return false;
			}
			if ($nc(this->fChildSequence)->get(i) != $nc(this->fCurrentChildSequence)->get(i + 1)) {
				return false;
			}
		}
	} else {
		return false;
	}
	return true;
}

bool ElementSchemePointer::isFragmentResolved() {
	return this->fIsFragmentResolved;
}

bool ElementSchemePointer::isChildFragmentResolved() {
	if (this->fIsShortHand && this->fShortHandPointer != nullptr && $nc(this->fChildSequence)->length <= 0) {
		return $nc(this->fShortHandPointer)->isChildFragmentResolved();
	} else {
		return this->fWasOnlyEmptyElementFound ? !this->fWasOnlyEmptyElementFound : (this->fIsFragmentResolved && (this->fCurrentChildDepth >= this->fFoundDepth));
	}
}

void ElementSchemePointer::reportError($String* key, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$init($XPointerMessageFormatter);
	$throwNew($XNIException, $($nc(($($nc(this->fErrorReporter)->getMessageFormatter($XPointerMessageFormatter::XPOINTER_DOMAIN))))->formatMessage($($nc(this->fErrorReporter)->getLocale()), key, arguments)));
}

void ElementSchemePointer::initErrorReporter() {
	if (this->fErrorReporter == nullptr) {
		$set(this, fErrorReporter, $new($XMLErrorReporter));
	}
	if (this->fErrorHandler == nullptr) {
		$set(this, fErrorHandler, $new($XPointerErrorHandler));
	}
	$init($XPointerMessageFormatter);
	$nc(this->fErrorReporter)->putMessageFormatter($XPointerMessageFormatter::XPOINTER_DOMAIN, $$new($XPointerMessageFormatter));
}

void ElementSchemePointer::init() {
	$set(this, fSchemeName, nullptr);
	$set(this, fSchemeData, nullptr);
	$set(this, fShortHandPointerName, nullptr);
	this->fIsResolveElement = false;
	this->fIsElementFound = false;
	this->fWasOnlyEmptyElementFound = false;
	this->fFoundDepth = 0;
	this->fCurrentChildPosition = 1;
	this->fCurrentChildDepth = 0;
	this->fIsFragmentResolved = false;
	$set(this, fShortHandPointer, nullptr);
	initErrorReporter();
}

ElementSchemePointer::ElementSchemePointer() {
}

$Class* ElementSchemePointer::load$($String* name, bool initialize) {
	$loadClass(ElementSchemePointer, name, initialize, &_ElementSchemePointer_ClassInfo_, allocate$ElementSchemePointer);
	return class$;
}

$Class* ElementSchemePointer::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com