#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ConditionOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$RangeOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$StringOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$UnionOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef ANCHOR
#undef BACKREFERENCE
#undef CAPTURE
#undef CHAR
#undef CLOSURE
#undef CONDITION
#undef COUNT
#undef DOT
#undef INDEPENDENT
#undef LOOKAHEAD
#undef LOOKBEHIND
#undef MODIFIER
#undef NEGATIVELOOKAHEAD
#undef NEGATIVELOOKBEHIND
#undef NONGREEDYCLOSURE
#undef NONGREEDYQUESTION
#undef NRANGE
#undef QUESTION
#undef RANGE
#undef STRING
#undef UNION

using $Op$CharOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$CharOp;
using $Op$ChildOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp;
using $Op$ConditionOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ConditionOp;
using $Op$ModifierOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ModifierOp;
using $Op$RangeOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$RangeOp;
using $Op$StringOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$StringOp;
using $Op$UnionOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$UnionOp;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _Op_FieldInfo_[] = {
	{"DOT", "I", nullptr, $STATIC | $FINAL, $constField(Op, DOT)},
	{"CHAR", "I", nullptr, $STATIC | $FINAL, $constField(Op, CHAR)},
	{"RANGE", "I", nullptr, $STATIC | $FINAL, $constField(Op, RANGE)},
	{"NRANGE", "I", nullptr, $STATIC | $FINAL, $constField(Op, NRANGE)},
	{"ANCHOR", "I", nullptr, $STATIC | $FINAL, $constField(Op, ANCHOR)},
	{"STRING", "I", nullptr, $STATIC | $FINAL, $constField(Op, STRING)},
	{"CLOSURE", "I", nullptr, $STATIC | $FINAL, $constField(Op, CLOSURE)},
	{"NONGREEDYCLOSURE", "I", nullptr, $STATIC | $FINAL, $constField(Op, NONGREEDYCLOSURE)},
	{"QUESTION", "I", nullptr, $STATIC | $FINAL, $constField(Op, QUESTION)},
	{"NONGREEDYQUESTION", "I", nullptr, $STATIC | $FINAL, $constField(Op, NONGREEDYQUESTION)},
	{"UNION", "I", nullptr, $STATIC | $FINAL, $constField(Op, UNION)},
	{"CAPTURE", "I", nullptr, $STATIC | $FINAL, $constField(Op, CAPTURE)},
	{"BACKREFERENCE", "I", nullptr, $STATIC | $FINAL, $constField(Op, BACKREFERENCE)},
	{"LOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(Op, LOOKAHEAD)},
	{"NEGATIVELOOKAHEAD", "I", nullptr, $STATIC | $FINAL, $constField(Op, NEGATIVELOOKAHEAD)},
	{"LOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(Op, LOOKBEHIND)},
	{"NEGATIVELOOKBEHIND", "I", nullptr, $STATIC | $FINAL, $constField(Op, NEGATIVELOOKBEHIND)},
	{"INDEPENDENT", "I", nullptr, $STATIC | $FINAL, $constField(Op, INDEPENDENT)},
	{"MODIFIER", "I", nullptr, $STATIC | $FINAL, $constField(Op, MODIFIER)},
	{"CONDITION", "I", nullptr, $STATIC | $FINAL, $constField(Op, CONDITION)},
	{"nofinstances", "I", nullptr, $STATIC, $staticField(Op, nofinstances)},
	{"COUNT", "Z", nullptr, $STATIC | $FINAL, $constField(Op, COUNT)},
	{"type", "I", nullptr, $FINAL, $field(Op, type)},
	{"next", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $field(Op, next)},
	{}
};

$MethodInfo _Op_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(Op, init$, void, int32_t)},
	{"createAnchor", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $staticMethod(Op, createAnchor, $Op$CharOp*, int32_t)},
	{"createBackReference", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $staticMethod(Op, createBackReference, $Op$CharOp*, int32_t)},
	{"createCapture", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $staticMethod(Op, createCapture, $Op$CharOp*, int32_t, Op*)},
	{"createChar", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp;", nullptr, $STATIC, $staticMethod(Op, createChar, $Op$CharOp*, int32_t)},
	{"createClosure", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $staticMethod(Op, createClosure, $Op$ChildOp*, int32_t)},
	{"createCondition", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ConditionOp;", nullptr, $STATIC, $staticMethod(Op, createCondition, $Op$ConditionOp*, Op*, int32_t, Op*, Op*, Op*)},
	{"createDot", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $STATIC, $staticMethod(Op, createDot, Op*)},
	{"createIndependent", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $staticMethod(Op, createIndependent, $Op$ChildOp*, Op*, Op*)},
	{"createLook", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $staticMethod(Op, createLook, $Op$ChildOp*, int32_t, Op*, Op*)},
	{"createModifier", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;II)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp;", nullptr, $STATIC, $staticMethod(Op, createModifier, $Op$ModifierOp*, Op*, Op*, int32_t, int32_t)},
	{"createNonGreedyClosure", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $staticMethod(Op, createNonGreedyClosure, $Op$ChildOp*)},
	{"createQuestion", "(Z)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp;", nullptr, $STATIC, $staticMethod(Op, createQuestion, $Op$ChildOp*, bool)},
	{"createRange", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$RangeOp;", nullptr, $STATIC, $staticMethod(Op, createRange, $Op$RangeOp*, $Token*)},
	{"createString", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$StringOp;", nullptr, $STATIC, $staticMethod(Op, createString, $Op$StringOp*, $String*)},
	{"createUnion", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op$UnionOp;", nullptr, $STATIC, $staticMethod(Op, createUnion, $Op$UnionOp*, int32_t)},
	{"elementAt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $virtualMethod(Op, elementAt, Op*, int32_t)},
	{"getChild", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $virtualMethod(Op, getChild, Op*)},
	{"getData", "()I", nullptr, 0, $virtualMethod(Op, getData, int32_t)},
	{"getData2", "()I", nullptr, 0, $virtualMethod(Op, getData2, int32_t)},
	{"getString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Op, getString, $String*)},
	{"getToken", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, 0, $virtualMethod(Op, getToken, $RangeToken*)},
	{"size", "()I", nullptr, 0, $virtualMethod(Op, size, int32_t)},
	{}
};

$InnerClassInfo _Op_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ConditionOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "StringOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "RangeOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ModifierOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ChildOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "UnionOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "CharOp", $STATIC},
	{}
};

$ClassInfo _Op_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	"java.lang.Object",
	nullptr,
	_Op_FieldInfo_,
	_Op_MethodInfo_,
	nullptr,
	nullptr,
	_Op_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp,com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp"
};

$Object* allocate$Op($Class* clazz) {
	return $of($alloc(Op));
}

int32_t Op::nofinstances = 0;

Op* Op::createDot() {
	$init(Op);
	return $new(Op, Op::DOT);
}

$Op$CharOp* Op::createChar(int32_t data) {
	$init(Op);
	return $new($Op$CharOp, Op::CHAR, data);
}

$Op$CharOp* Op::createAnchor(int32_t data) {
	$init(Op);
	return $new($Op$CharOp, Op::ANCHOR, data);
}

$Op$CharOp* Op::createCapture(int32_t number, Op* next) {
	$init(Op);
	$var($Op$CharOp, op, $new($Op$CharOp, Op::CAPTURE, number));
	$set(op, next, next);
	return op;
}

$Op$UnionOp* Op::createUnion(int32_t size) {
	$init(Op);
	return $new($Op$UnionOp, Op::UNION, size);
}

$Op$ChildOp* Op::createClosure(int32_t id) {
	$init(Op);
	return $new($Op$ModifierOp, Op::CLOSURE, id, -1);
}

$Op$ChildOp* Op::createNonGreedyClosure() {
	$init(Op);
	return $new($Op$ChildOp, Op::NONGREEDYCLOSURE);
}

$Op$ChildOp* Op::createQuestion(bool nongreedy) {
	$init(Op);
	return $new($Op$ChildOp, nongreedy ? Op::NONGREEDYQUESTION : Op::QUESTION);
}

$Op$RangeOp* Op::createRange($Token* tok) {
	$init(Op);
	return $new($Op$RangeOp, Op::RANGE, tok);
}

$Op$ChildOp* Op::createLook(int32_t type, Op* next, Op* branch) {
	$init(Op);
	$var($Op$ChildOp, op, $new($Op$ChildOp, type));
	op->setChild(branch);
	$set(op, next, next);
	return op;
}

$Op$CharOp* Op::createBackReference(int32_t refno) {
	$init(Op);
	return $new($Op$CharOp, Op::BACKREFERENCE, refno);
}

$Op$StringOp* Op::createString($String* literal) {
	$init(Op);
	return $new($Op$StringOp, Op::STRING, literal);
}

$Op$ChildOp* Op::createIndependent(Op* next, Op* branch) {
	$init(Op);
	$var($Op$ChildOp, op, $new($Op$ChildOp, Op::INDEPENDENT));
	op->setChild(branch);
	$set(op, next, next);
	return op;
}

$Op$ModifierOp* Op::createModifier(Op* next, Op* branch, int32_t add, int32_t mask) {
	$init(Op);
	$var($Op$ModifierOp, op, $new($Op$ModifierOp, Op::MODIFIER, add, mask));
	op->setChild(branch);
	$set(op, next, next);
	return op;
}

$Op$ConditionOp* Op::createCondition(Op* next, int32_t ref, Op* conditionflow, Op* yesflow, Op* noflow) {
	$init(Op);
	$var($Op$ConditionOp, op, $new($Op$ConditionOp, Op::CONDITION, ref, conditionflow, yesflow, noflow));
	$set(op, next, next);
	return op;
}

void Op::init$(int32_t type) {
	$set(this, next, nullptr);
	this->type = type;
}

int32_t Op::size() {
	return 0;
}

Op* Op::elementAt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

Op* Op::getChild() {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

int32_t Op::getData() {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

int32_t Op::getData2() {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

$RangeToken* Op::getToken() {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

$String* Op::getString() {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Internal Error: type="_s, $$str(this->type)}));
	$shouldNotReachHere();
}

void clinit$Op($Class* class$) {
	Op::nofinstances = 0;
}

Op::Op() {
}

$Class* Op::load$($String* name, bool initialize) {
	$loadClass(Op, name, initialize, &_Op_ClassInfo_, clinit$Op, allocate$Op);
	return class$;
}

$Class* Op::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com