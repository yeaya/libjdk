#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Scanner.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Step.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CHILD
#undef DEBUG_ALL
#undef DEBUG_XPATH_PARSE
#undef DESCENDANT
#undef EMPTY_STRING
#undef EXPRTOKEN_ATSIGN
#undef EXPRTOKEN_AXISNAME_ATTRIBUTE
#undef EXPRTOKEN_AXISNAME_CHILD
#undef EXPRTOKEN_DOUBLE_COLON
#undef EXPRTOKEN_NAMETEST_ANY
#undef EXPRTOKEN_NAMETEST_NAMESPACE
#undef EXPRTOKEN_NAMETEST_QNAME
#undef EXPRTOKEN_OPERATOR_DOUBLE_SLASH
#undef EXPRTOKEN_OPERATOR_SLASH
#undef EXPRTOKEN_OPERATOR_UNION
#undef EXPRTOKEN_PERIOD
#undef NODE
#undef SELF
#undef WILDCARD

using $XPath$LocationPathArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath>;
using $XPath$StepArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step>;
using $XPath$1 = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$1;
using $XPath$Axis = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis;
using $XPath$LocationPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath;
using $XPath$NodeTest = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest;
using $XPath$Scanner = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Scanner;
using $XPath$Step = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step;
using $XPath$Tokens = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens;
using $XPathException = ::com::sun::org::apache::xerces::internal::impl::xpath::XPathException;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

class XPath$$Lambda$lambda$toString$0 : public $Function {
	$class(XPath$$Lambda$lambda$toString$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* aPath) override {
		 return $of(XPath::lambda$toString$0($cast($XPath$LocationPath, aPath)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XPath$$Lambda$lambda$toString$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XPath$$Lambda$lambda$toString$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPath$$Lambda$lambda$toString$0, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPath$$Lambda$lambda$toString$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo XPath$$Lambda$lambda$toString$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$$Lambda$lambda$toString$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* XPath$$Lambda$lambda$toString$0::load$($String* name, bool initialize) {
	$loadClass(XPath$$Lambda$lambda$toString$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XPath$$Lambda$lambda$toString$0::class$ = nullptr;

$FieldInfo _XPath_FieldInfo_[] = {
	{"DEBUG_ALL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath, DEBUG_ALL)},
	{"DEBUG_XPATH_PARSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XPath, DEBUG_XPATH_PARSE)},
	{"fExpression", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(XPath, fExpression)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED | $FINAL, $field(XPath, fSymbolTable)},
	{"fLocationPaths", "[Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", nullptr, $PROTECTED | $FINAL, $field(XPath, fLocationPaths)},
	{}
};

$MethodInfo _XPath_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(XPath, init$, void, $String*, $SymbolTable*, $NamespaceContext*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"buildLocationPath", "(Ljava/util/ArrayList;)Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", "(Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Step;>;)Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", $PRIVATE, $method(XPath, buildLocationPath, $XPath$LocationPath*, $ArrayList*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"check", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(XPath, check, void, bool), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"getLocationPath", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", nullptr, $PUBLIC, $virtualMethod(XPath, getLocationPath, $XPath$LocationPath*)},
	{"getLocationPaths", "()[Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", nullptr, $PUBLIC, $virtualMethod(XPath, getLocationPaths, $XPath$LocationPathArray*)},
	{"lambda$toString$0", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XPath, lambda$toString$0, $String*, $XPath$LocationPath*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XPath, main, void, $StringArray*), "java.lang.Exception"},
	{"parseExpression", "(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)[Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", nullptr, $PRIVATE, $method(XPath, parseExpression, $XPath$LocationPathArray*, $NamespaceContext*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"parseNodeTest", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest;", nullptr, $PRIVATE, $method(XPath, parseNodeTest, $XPath$NodeTest*, int32_t, $XPath$Tokens*, $NamespaceContext*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPath, toString, $String*)},
	{}
};

$InnerClassInfo _XPath_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Scanner", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Tokens", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Tokens", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$NodeTest", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "NodeTest", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Axis", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Axis", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Step", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Step", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$LocationPath", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "LocationPath", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath",
	"java.lang.Object",
	nullptr,
	_XPath_FieldInfo_,
	_XPath_MethodInfo_,
	nullptr,
	nullptr,
	_XPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner,com.sun.org.apache.xerces.internal.impl.xpath.XPath$Tokens,com.sun.org.apache.xerces.internal.impl.xpath.XPath$NodeTest,com.sun.org.apache.xerces.internal.impl.xpath.XPath$Axis,com.sun.org.apache.xerces.internal.impl.xpath.XPath$Step,com.sun.org.apache.xerces.internal.impl.xpath.XPath$LocationPath,com.sun.org.apache.xerces.internal.impl.xpath.XPath$1"
};

$Object* allocate$XPath($Class* clazz) {
	return $of($alloc(XPath));
}

void XPath::init$($String* xpath, $SymbolTable* symbolTable, $NamespaceContext* context) {
	$set(this, fExpression, xpath);
	$set(this, fSymbolTable, symbolTable);
	$set(this, fLocationPaths, parseExpression(context));
}

$XPath$LocationPathArray* XPath::getLocationPaths() {
	$useLocalCurrentObjectStackCache();
	$var($XPath$LocationPathArray, ret, $new($XPath$LocationPathArray, $nc(this->fLocationPaths)->length));
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		ret->set(i, $cast($XPath$LocationPath, $($nc($nc(this->fLocationPaths)->get(i))->clone())));
	}
	return ret;
}

$XPath$LocationPath* XPath::getLocationPath() {
	return $cast($XPath$LocationPath, $nc($nc(this->fLocationPaths)->get(0))->clone());
}

$String* XPath::toString() {
	$useLocalCurrentObjectStackCache();
	$var($List, l, $Arrays::asList(this->fLocationPaths));
	$var($String, s, $cast($String, $nc($($nc($($nc(l)->stream()))->map(static_cast<$Function*>($$new(XPath$$Lambda$lambda$toString$0)))))->collect($($Collectors::joining("|"_s)))));
	return s;
}

void XPath::check(bool b) {
	if (!b) {
		$throwNew($XPathException, "c-general-xpath"_s);
	}
}

$XPath$LocationPath* XPath::buildLocationPath($ArrayList* stepsVector) {
	int32_t size = $nc(stepsVector)->size();
	check(size != 0);
	$var($XPath$StepArray, steps, $new($XPath$StepArray, size));
	$assign(steps, $fcast($XPath$StepArray, stepsVector->toArray(steps)));
	stepsVector->clear();
	return $new($XPath$LocationPath, steps);
}

$XPath$LocationPathArray* XPath::parseExpression($NamespaceContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($XPath$Tokens, xtokens, $new($XPath$Tokens, this->fSymbolTable));
	$var($XPath$Scanner, scanner, $new($XPath$1, this, this->fSymbolTable));
	int32_t length = $nc(this->fExpression)->length();
	bool success = scanner->scanExpr(this->fSymbolTable, xtokens, this->fExpression, 0, length);
	if (!success) {
		$throwNew($XPathException, "c-general-xpath"_s);
	}
	$var($ArrayList, stepsVector, $new($ArrayList));
	$var($ArrayList, locationPathsVector, $new($ArrayList));
	bool expectingStep = true;
	while (xtokens->hasMore()) {
		int32_t token = xtokens->nextToken();
		switch (token) {
		case $XPath$Tokens::EXPRTOKEN_OPERATOR_UNION:
			{
				{
					check(!expectingStep);
					locationPathsVector->add($(buildLocationPath(stepsVector)));
					expectingStep = true;
					break;
				}
			}
		case $XPath$Tokens::EXPRTOKEN_ATSIGN:
			{
				{
					check(expectingStep);
					$var($XPath$Axis, var$0, $new($XPath$Axis, $XPath$Axis::ATTRIBUTE));
					$var($XPath$Step, step, $new($XPath$Step, var$0, $(parseNodeTest(xtokens->nextToken(), xtokens, context))));
					stepsVector->add(step);
					expectingStep = false;
					break;
				}
			}
		case $XPath$Tokens::EXPRTOKEN_AXISNAME_ATTRIBUTE:
			{
				{
					check(expectingStep);
					if (xtokens->nextToken() != $XPath$Tokens::EXPRTOKEN_DOUBLE_COLON) {
						$throwNew($XPathException, "c-general-xpath"_s);
					}
					$var($XPath$Axis, var$1, $new($XPath$Axis, $XPath$Axis::ATTRIBUTE));
					$var($XPath$Step, step, $new($XPath$Step, var$1, $(parseNodeTest(xtokens->nextToken(), xtokens, context))));
					stepsVector->add(step);
					expectingStep = false;
					break;
				}
			}
		case $XPath$Tokens::EXPRTOKEN_NAMETEST_ANY:
			{}
		case $XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE:
			{}
		case $XPath$Tokens::EXPRTOKEN_NAMETEST_QNAME:
			{
				{
					check(expectingStep);
					$var($XPath$Axis, var$2, $new($XPath$Axis, $XPath$Axis::CHILD));
					$var($XPath$Step, step, $new($XPath$Step, var$2, $(parseNodeTest(token, xtokens, context))));
					stepsVector->add(step);
					expectingStep = false;
					break;
				}
			}
		case $XPath$Tokens::EXPRTOKEN_AXISNAME_CHILD:
			{
				{
					check(expectingStep);
					if (xtokens->nextToken() != $XPath$Tokens::EXPRTOKEN_DOUBLE_COLON) {
						$throwNew($XPathException, "c-general-xpath"_s);
					}
					$var($XPath$Axis, var$3, $new($XPath$Axis, $XPath$Axis::CHILD));
					$var($XPath$Step, step, $new($XPath$Step, var$3, $(parseNodeTest(xtokens->nextToken(), xtokens, context))));
					stepsVector->add(step);
					expectingStep = false;
					break;
				}
			}
		case $XPath$Tokens::EXPRTOKEN_PERIOD:
			{
				{
					check(expectingStep);
					expectingStep = false;
					if (stepsVector->isEmpty()) {
						$var($XPath$Axis, axis, $new($XPath$Axis, $XPath$Axis::SELF));
						$var($XPath$NodeTest, nodeTest, $new($XPath$NodeTest, $XPath$NodeTest::NODE));
						$var($XPath$Step, step, $new($XPath$Step, axis, nodeTest));
						stepsVector->add(step);
						bool var$4 = xtokens->hasMore();
						if (var$4 && xtokens->peekToken() == $XPath$Tokens::EXPRTOKEN_OPERATOR_DOUBLE_SLASH) {
							xtokens->nextToken();
							$assign(axis, $new($XPath$Axis, $XPath$Axis::DESCENDANT));
							$assign(nodeTest, $new($XPath$NodeTest, $XPath$NodeTest::NODE));
							$assign(step, $new($XPath$Step, axis, nodeTest));
							stepsVector->add(step);
							expectingStep = true;
						}
					}
					break;
				}
			}
		case $XPath$Tokens::EXPRTOKEN_OPERATOR_DOUBLE_SLASH:
			{
				{
					$throwNew($XPathException, "c-general-xpath"_s);
				}
			}
		case $XPath$Tokens::EXPRTOKEN_DOUBLE_COLON:
			{
				{
					$throwNew($XPathException, "c-general-xpath"_s);
				}
			}
		case $XPath$Tokens::EXPRTOKEN_OPERATOR_SLASH:
			{
				{
					check(!expectingStep);
					expectingStep = true;
					break;
				}
			}
		default:
			{
				$throwNew($InternalError);
			}
		}
	}
	check(!expectingStep);
	locationPathsVector->add($(buildLocationPath(stepsVector)));
	return $fcast($XPath$LocationPathArray, locationPathsVector->toArray($$new($XPath$LocationPathArray, locationPathsVector->size())));
}

$XPath$NodeTest* XPath::parseNodeTest(int32_t typeToken, $XPath$Tokens* xtokens, $NamespaceContext* context) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, prefix, nullptr)
		$var($String, uri, nullptr)
		$var($String, localpart, nullptr)
		$var($String, rawname, nullptr)
		switch (typeToken) {
		case $XPath$Tokens::EXPRTOKEN_NAMETEST_ANY:
			{
				return $new($XPath$NodeTest, $XPath$NodeTest::WILDCARD);
			}
		case $XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE:
			{}
		case $XPath$Tokens::EXPRTOKEN_NAMETEST_QNAME:
			{
				$assign(prefix, $nc(xtokens)->nextTokenAsString());
				$assign(uri, nullptr);
				$init($XMLSymbols);
				if (context != nullptr && prefix != $XMLSymbols::EMPTY_STRING) {
					$assign(uri, context->getURI(prefix));
				}
				$init($XMLSymbols);
				if (prefix != $XMLSymbols::EMPTY_STRING && context != nullptr && uri == nullptr) {
					$throwNew($XPathException, "c-general-xpath-ns"_s);
				}
				if (typeToken == $XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE) {
					return $new($XPath$NodeTest, prefix, uri);
				}
				$assign(localpart, xtokens->nextTokenAsString());
				$init($XMLSymbols);
				$assign(rawname, prefix != $XMLSymbols::EMPTY_STRING ? $nc(this->fSymbolTable)->addSymbol($$str({prefix, $$str(u':'), localpart})) : localpart);
				return $new($XPath$NodeTest, $$new($QName, prefix, localpart, rawname, uri));
			}
		default:
			{
				$throwNew($XPathException, "c-general-xpath"_s);
			}
		}
	}
}

void XPath::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(argv)->length; ++i) {
		$var($String, expression, argv->get(i));
		$nc($System::out)->println($$str({"# XPath expression: \""_s, expression, $$str(u'\"')}));
		try {
			$var($SymbolTable, symbolTable, $new($SymbolTable));
			$var(XPath, xpath, $new(XPath, expression, symbolTable, nullptr));
			$nc($System::out)->println($$str({"expanded xpath: \""_s, $(xpath->toString()), $$str(u'\"')}));
		} catch ($XPathException& e) {
			$nc($System::out)->println($$str({"error: "_s, $(e->getMessage())}));
		}
	}
}

$String* XPath::lambda$toString$0($XPath$LocationPath* aPath) {
	return $nc(aPath)->toString();
}

XPath::XPath() {
}

$Class* XPath::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(XPath$$Lambda$lambda$toString$0::classInfo$.name)) {
			return XPath$$Lambda$lambda$toString$0::load$(name, initialize);
		}
	}
	$loadClass(XPath, name, initialize, &_XPath_ClassInfo_, allocate$XPath);
	return class$;
}

$Class* XPath::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com