#include <com/sun/org/apache/bcel/internal/util/InstructionFinder.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint.h>
#include <java/lang/CharSequence.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef ALOAD
#undef ALOAD_0
#undef ALOAD_3
#undef ASTORE
#undef ASTORE_0
#undef ASTORE_3
#undef DCONST_0
#undef DCONST_1
#undef DLOAD
#undef DLOAD_0
#undef DLOAD_3
#undef DSTORE
#undef DSTORE_0
#undef DSTORE_3
#undef ENGLISH
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FLOAD
#undef FLOAD_0
#undef FLOAD_3
#undef FSTORE
#undef FSTORE_0
#undef FSTORE_3
#undef ICONST_0
#undef ICONST_5
#undef ICONST_M1
#undef ILOAD
#undef ILOAD_0
#undef ILOAD_3
#undef ISTORE
#undef ISTORE_0
#undef ISTORE_3
#undef LCONST_0
#undef LCONST_1
#undef LLOAD
#undef LLOAD_0
#undef LLOAD_3
#undef LSTORE
#undef LSTORE_0
#undef LSTORE_3
#undef NO_OPCODES
#undef OFFSET
#undef UNDEFINED

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InstructionFinder$CodeConstraint = ::com::sun::org::apache::bcel::internal::util::InstructionFinder$CodeConstraint;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _InstructionFinder_FieldInfo_[] = {
	{"OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstructionFinder, OFFSET)},
	{"NO_OPCODES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstructionFinder, NO_OPCODES)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(InstructionFinder, map)},
	{"il", "Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PRIVATE | $FINAL, $field(InstructionFinder, il)},
	{"ilString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InstructionFinder, ilString)},
	{"handles", "[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionFinder, handles)},
	{}
};

$MethodInfo _InstructionFinder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC, $method(InstructionFinder, init$, void, $InstructionList*)},
	{"compilePattern", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFinder, compilePattern, $String*, $String*)},
	{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC | $FINAL, $method(InstructionFinder, getInstructionList, $InstructionList*)},
	{"getMatch", "(II)[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $method(InstructionFinder, getMatch, $InstructionHandleArray*, int32_t, int32_t)},
	{"makeChar", "(S)C", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFinder, makeChar, char16_t, int16_t)},
	{"mapName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFinder, mapName, $String*, $String*)},
	{"precompile", "(SSS)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(InstructionFinder, precompile, $String*, int16_t, int16_t, int16_t)},
	{"reread", "()V", nullptr, $PUBLIC | $FINAL, $method(InstructionFinder, reread, void)},
	{"search", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint;)Ljava/util/Iterator;", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint;)Ljava/util/Iterator<[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PUBLIC | $FINAL, $method(InstructionFinder, search, $Iterator*, $String*, $InstructionHandle*, $InstructionFinder$CodeConstraint*)},
	{"search", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PUBLIC | $FINAL, $method(InstructionFinder, search, $Iterator*, $String*)},
	{"search", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Ljava/util/Iterator;", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Ljava/util/Iterator<[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PUBLIC | $FINAL, $method(InstructionFinder, search, $Iterator*, $String*, $InstructionHandle*)},
	{"search", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint;)Ljava/util/Iterator;", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint;)Ljava/util/Iterator<[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PUBLIC | $FINAL, $method(InstructionFinder, search, $Iterator*, $String*, $InstructionFinder$CodeConstraint*)},
	{}
};

$InnerClassInfo _InstructionFinder_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint", "com.sun.org.apache.bcel.internal.util.InstructionFinder", "CodeConstraint", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InstructionFinder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.InstructionFinder",
	"java.lang.Object",
	nullptr,
	_InstructionFinder_FieldInfo_,
	_InstructionFinder_MethodInfo_,
	nullptr,
	nullptr,
	_InstructionFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint"
};

$Object* allocate$InstructionFinder($Class* clazz) {
	return $of($alloc(InstructionFinder));
}

$Map* InstructionFinder::map = nullptr;

void InstructionFinder::init$($InstructionList* il) {
	$set(this, il, il);
	reread();
}

void InstructionFinder::reread() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->il)->getLength();
	$var($chars, buf, $new($chars, size));
	$set(this, handles, $nc(this->il)->getInstructionHandles());
	for (int32_t i = 0; i < size; ++i) {
		buf->set(i, makeChar($nc($($nc($nc(this->handles)->get(i))->getInstruction()))->getOpcode()));
	}
	$set(this, ilString, $new($String, buf));
}

$String* InstructionFinder::mapName($String* pattern) {
	$init(InstructionFinder);
	$useLocalCurrentObjectStackCache();
	$var($String, result, $cast($String, $nc(InstructionFinder::map)->get(pattern)));
	if (result != nullptr) {
		return result;
	}
	for (int16_t i = (int16_t)0; i < InstructionFinder::NO_OPCODES; ++i) {
		if ($nc(pattern)->equals($($Const::getOpcodeName(i)))) {
			return $str({""_s, $$str(makeChar(i))});
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Instruction unknown: "_s, pattern}));
}

$String* InstructionFinder::compilePattern($String* pattern) {
	$init(InstructionFinder);
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($String, lower, $nc(pattern)->toLowerCase($Locale::ENGLISH));
	$var($StringBuilder, buf, $new($StringBuilder));
	int32_t size = pattern->length();
	for (int32_t i = 0; i < size; ++i) {
		char16_t ch = lower->charAt(i);
		if ($Character::isLetterOrDigit(ch)) {
			$var($StringBuilder, name, $new($StringBuilder));
			while (($Character::isLetterOrDigit(ch) || ch == u'_') && i < size) {
				name->append(ch);
				if (++i < size) {
					ch = lower->charAt(i);
				} else {
					break;
				}
			}
			--i;
			buf->append($(mapName($(name->toString()))));
		} else if (!$Character::isWhitespace(ch)) {
			buf->append(ch);
		}
	}
	return buf->toString();
}

$InstructionHandleArray* InstructionFinder::getMatch(int32_t matched_from, int32_t match_length) {
	$var($InstructionHandleArray, match, $new($InstructionHandleArray, match_length));
	$System::arraycopy(this->handles, matched_from, match, 0, match_length);
	return match;
}

$Iterator* InstructionFinder::search($String* pattern, $InstructionHandle* from, $InstructionFinder$CodeConstraint* constraint) {
	$useLocalCurrentObjectStackCache();
	$var($String, search, compilePattern(pattern));
	int32_t start = -1;
	for (int32_t i = 0; i < $nc(this->handles)->length; ++i) {
		if ($nc(this->handles)->get(i) == from) {
			start = i;
			break;
		}
	}
	if (start == -1) {
		$throwNew($ClassGenException, $$str({"Instruction handle "_s, from, " not found in instruction list."_s}));
	}
	$var($Pattern, regex, $Pattern::compile(search));
	$var($List, matches, $new($ArrayList));
	$var($Matcher, matcher, $nc(regex)->matcher(this->ilString));
	while (true) {
		bool var$0 = start < $nc(this->ilString)->length();
		if (!(var$0 && $nc(matcher)->find(start))) {
			break;
		}
		{
			int32_t startExpr = matcher->start();
			int32_t endExpr = matcher->end();
			int32_t lenExpr = endExpr - startExpr;
			$var($InstructionHandleArray, match, getMatch(startExpr, lenExpr));
			if ((constraint == nullptr) || $nc(constraint)->checkCode(match)) {
				matches->add(match);
			}
			start = endExpr;
		}
	}
	return matches->iterator();
}

$Iterator* InstructionFinder::search($String* pattern) {
	return search(pattern, $($nc(this->il)->getStart()), nullptr);
}

$Iterator* InstructionFinder::search($String* pattern, $InstructionHandle* from) {
	return search(pattern, from, nullptr);
}

$Iterator* InstructionFinder::search($String* pattern, $InstructionFinder$CodeConstraint* constraint) {
	return search(pattern, $($nc(this->il)->getStart()), constraint);
}

char16_t InstructionFinder::makeChar(int16_t opcode) {
	$init(InstructionFinder);
	return (char16_t)(opcode + InstructionFinder::OFFSET);
}

$InstructionList* InstructionFinder::getInstructionList() {
	return this->il;
}

$String* InstructionFinder::precompile(int16_t from, int16_t to, int16_t extra) {
	$init(InstructionFinder);
	$var($StringBuilder, buf, $new($StringBuilder, "("_s));
	for (int16_t i = from; i <= to; ++i) {
		buf->append(makeChar(i));
		buf->append(u'|');
	}
	buf->append(makeChar(extra));
	buf->append(")"_s);
	return buf->toString();
}

void clinit$InstructionFinder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(InstructionFinder::map, $new($HashMap));
	{
		$nc(InstructionFinder::map)->put("arithmeticinstruction"_s, "(irem|lrem|iand|ior|ineg|isub|lneg|fneg|fmul|ldiv|fadd|lxor|frem|idiv|land|ixor|ishr|fsub|lshl|fdiv|iadd|lor|dmul|lsub|ishl|imul|lmul|lushr|dneg|iushr|lshr|ddiv|drem|dadd|ladd|dsub)"_s);
		$nc(InstructionFinder::map)->put("invokeinstruction"_s, "(invokevirtual|invokeinterface|invokestatic|invokespecial|invokedynamic)"_s);
		$nc(InstructionFinder::map)->put("arrayinstruction"_s, "(baload|aastore|saload|caload|fastore|lastore|iaload|castore|iastore|aaload|bastore|sastore|faload|laload|daload|dastore)"_s);
		$nc(InstructionFinder::map)->put("gotoinstruction"_s, "(goto|goto_w)"_s);
		$nc(InstructionFinder::map)->put("conversioninstruction"_s, "(d2l|l2d|i2s|d2i|l2i|i2b|l2f|d2f|f2i|i2d|i2l|f2d|i2c|f2l|i2f)"_s);
		$nc(InstructionFinder::map)->put("localvariableinstruction"_s, "(fstore|iinc|lload|dstore|dload|iload|aload|astore|istore|fload|lstore)"_s);
		$nc(InstructionFinder::map)->put("loadinstruction"_s, "(fload|dload|lload|iload|aload)"_s);
		$nc(InstructionFinder::map)->put("fieldinstruction"_s, "(getfield|putstatic|getstatic|putfield)"_s);
		$nc(InstructionFinder::map)->put("cpinstruction"_s, "(ldc2_w|invokeinterface|invokedynamic|multianewarray|putstatic|instanceof|getstatic|checkcast|getfield|invokespecial|ldc_w|invokestatic|invokevirtual|putfield|ldc|new|anewarray)"_s);
		$nc(InstructionFinder::map)->put("stackinstruction"_s, "(dup2|swap|dup2_x2|pop|pop2|dup|dup2_x1|dup_x2|dup_x1)"_s);
		$nc(InstructionFinder::map)->put("branchinstruction"_s, "(ifle|if_acmpne|if_icmpeq|if_acmpeq|ifnonnull|goto_w|iflt|ifnull|if_icmpne|tableswitch|if_icmple|ifeq|if_icmplt|jsr_w|if_icmpgt|ifgt|jsr|goto|ifne|ifge|lookupswitch|if_icmpge)"_s);
		$nc(InstructionFinder::map)->put("returninstruction"_s, "(lreturn|ireturn|freturn|dreturn|areturn|return)"_s);
		$nc(InstructionFinder::map)->put("storeinstruction"_s, "(istore|fstore|dstore|astore|lstore)"_s);
		$nc(InstructionFinder::map)->put("select"_s, "(tableswitch|lookupswitch)"_s);
		$nc(InstructionFinder::map)->put("ifinstruction"_s, "(ifeq|ifgt|if_icmpne|if_icmpeq|ifge|ifnull|ifne|if_icmple|if_icmpge|if_acmpeq|if_icmplt|if_acmpne|ifnonnull|iflt|if_icmpgt|ifle)"_s);
		$nc(InstructionFinder::map)->put("jsrinstruction"_s, "(jsr|jsr_w)"_s);
		$nc(InstructionFinder::map)->put("variablelengthinstruction"_s, "(tableswitch|jsr|goto|lookupswitch)"_s);
		$nc(InstructionFinder::map)->put("unconditionalbranch"_s, "(goto|jsr|jsr_w|athrow|goto_w)"_s);
		$nc(InstructionFinder::map)->put("constantpushinstruction"_s, "(dconst|bipush|sipush|fconst|iconst|lconst)"_s);
		$nc(InstructionFinder::map)->put("typedinstruction"_s, "(imul|lsub|aload|fload|lor|new|aaload|fcmpg|iand|iaload|lrem|idiv|d2l|isub|dcmpg|dastore|ret|f2d|f2i|drem|iinc|i2c|checkcast|frem|lreturn|astore|lushr|daload|dneg|fastore|istore|lshl|ldiv|lstore|areturn|ishr|ldc_w|invokeinterface|invokedynamic|aastore|lxor|ishl|l2d|i2f|return|faload|sipush|iushr|caload|instanceof|invokespecial|putfield|fmul|ireturn|laload|d2f|lneg|ixor|i2l|fdiv|lastore|multianewarray|i2b|getstatic|i2d|putstatic|fcmpl|saload|ladd|irem|dload|jsr_w|dconst|dcmpl|fsub|freturn|ldc|aconst_null|castore|lmul|ldc2_w|dadd|iconst|f2l|ddiv|dstore|land|jsr|anewarray|dmul|bipush|dsub|sastore|d2i|i2s|lshr|iadd|l2i|lload|bastore|fstore|fneg|iload|fadd|baload|fconst|ior|ineg|dreturn|l2f|lconst|getfield|invokevirtual|invokestatic|iastore)"_s);
		$nc(InstructionFinder::map)->put("popinstruction"_s, "(fstore|dstore|pop|pop2|astore|putstatic|istore|lstore)"_s);
		$nc(InstructionFinder::map)->put("allocationinstruction"_s, "(multianewarray|new|anewarray|newarray)"_s);
		$nc(InstructionFinder::map)->put("indexedinstruction"_s, "(lload|lstore|fload|ldc2_w|invokeinterface|invokedynamic|multianewarray|astore|dload|putstatic|instanceof|getstatic|checkcast|getfield|invokespecial|dstore|istore|iinc|ldc_w|ret|fstore|invokestatic|iload|putfield|invokevirtual|ldc|new|aload|anewarray)"_s);
		$nc(InstructionFinder::map)->put("pushinstruction"_s, "(dup|lload|dup2|bipush|fload|ldc2_w|sipush|lconst|fconst|dload|getstatic|ldc_w|aconst_null|dconst|iload|ldc|iconst|aload)"_s);
		$nc(InstructionFinder::map)->put("stackproducer"_s, "(imul|lsub|aload|fload|lor|new|aaload|fcmpg|iand|iaload|lrem|idiv|d2l|isub|dcmpg|dup|f2d|f2i|drem|i2c|checkcast|frem|lushr|daload|dneg|lshl|ldiv|ishr|ldc_w|invokeinterface|invokedynamic|lxor|ishl|l2d|i2f|faload|sipush|iushr|caload|instanceof|invokespecial|fmul|laload|d2f|lneg|ixor|i2l|fdiv|getstatic|i2b|swap|i2d|dup2|fcmpl|saload|ladd|irem|dload|jsr_w|dconst|dcmpl|fsub|ldc|arraylength|aconst_null|tableswitch|lmul|ldc2_w|iconst|dadd|f2l|ddiv|land|jsr|anewarray|dmul|bipush|dsub|d2i|newarray|i2s|lshr|iadd|lload|l2i|fneg|iload|fadd|baload|fconst|lookupswitch|ior|ineg|lconst|l2f|getfield|invokevirtual|invokestatic)"_s);
		$nc(InstructionFinder::map)->put("stackconsumer"_s, "(imul|lsub|lor|iflt|fcmpg|if_icmpgt|iand|ifeq|if_icmplt|lrem|ifnonnull|idiv|d2l|isub|dcmpg|dastore|if_icmpeq|f2d|f2i|drem|i2c|checkcast|frem|lreturn|astore|lushr|pop2|monitorexit|dneg|fastore|istore|lshl|ldiv|lstore|areturn|if_icmpge|ishr|monitorenter|invokeinterface|invokedynamic|aastore|lxor|ishl|l2d|i2f|return|iushr|instanceof|invokespecial|fmul|ireturn|d2f|lneg|ixor|pop|i2l|ifnull|fdiv|lastore|i2b|if_acmpeq|ifge|swap|i2d|putstatic|fcmpl|ladd|irem|dcmpl|fsub|freturn|ifgt|castore|lmul|dadd|f2l|ddiv|dstore|land|if_icmpne|if_acmpne|dmul|dsub|sastore|ifle|d2i|i2s|lshr|iadd|l2i|bastore|fstore|fneg|fadd|ior|ineg|ifne|dreturn|l2f|if_icmple|getfield|invokevirtual|invokestatic|iastore)"_s);
		$nc(InstructionFinder::map)->put("exceptionthrower"_s, "(irem|lrem|laload|putstatic|baload|dastore|areturn|getstatic|ldiv|anewarray|iastore|castore|idiv|saload|lastore|fastore|putfield|lreturn|caload|getfield|return|aastore|freturn|newarray|instanceof|multianewarray|athrow|faload|iaload|aaload|dreturn|monitorenter|checkcast|bastore|arraylength|new|invokevirtual|sastore|ldc_w|ireturn|invokespecial|monitorexit|invokeinterface|invokedynamic|ldc|invokestatic|daload)"_s);
		$nc(InstructionFinder::map)->put("loadclass"_s, "(multianewarray|invokeinterface|invokedynamic|instanceof|invokespecial|putfield|checkcast|putstatic|invokevirtual|new|getstatic|invokestatic|getfield|anewarray)"_s);
		$nc(InstructionFinder::map)->put("instructiontargeter"_s, "(ifle|if_acmpne|if_icmpeq|if_acmpeq|ifnonnull|goto_w|iflt|ifnull|if_icmpne|tableswitch|if_icmple|ifeq|if_icmplt|jsr_w|if_icmpgt|ifgt|jsr|goto|ifne|ifge|lookupswitch|if_icmpge)"_s);
		$nc(InstructionFinder::map)->put("if_icmp"_s, "(if_icmpne|if_icmpeq|if_icmple|if_icmpge|if_icmplt|if_icmpgt)"_s);
		$nc(InstructionFinder::map)->put("if_acmp"_s, "(if_acmpeq|if_acmpne)"_s);
		$nc(InstructionFinder::map)->put("if"_s, "(ifeq|ifne|iflt|ifge|ifgt|ifle)"_s);
		$nc(InstructionFinder::map)->put("iconst"_s, $(InstructionFinder::precompile($Const::ICONST_0, $Const::ICONST_5, $Const::ICONST_M1)));
		$nc(InstructionFinder::map)->put("lconst"_s, $$new($String, $$new($chars, {
			u'(',
			InstructionFinder::makeChar($Const::LCONST_0),
			u'|',
			InstructionFinder::makeChar($Const::LCONST_1),
			u')'
		})));
		$nc(InstructionFinder::map)->put("dconst"_s, $$new($String, $$new($chars, {
			u'(',
			InstructionFinder::makeChar($Const::DCONST_0),
			u'|',
			InstructionFinder::makeChar($Const::DCONST_1),
			u')'
		})));
		$nc(InstructionFinder::map)->put("fconst"_s, $$new($String, $$new($chars, {
			u'(',
			InstructionFinder::makeChar($Const::FCONST_0),
			u'|',
			InstructionFinder::makeChar($Const::FCONST_1),
			u'|',
			InstructionFinder::makeChar($Const::FCONST_2),
			u')'
		})));
		$nc(InstructionFinder::map)->put("lload"_s, $(InstructionFinder::precompile($Const::LLOAD_0, $Const::LLOAD_3, $Const::LLOAD)));
		$nc(InstructionFinder::map)->put("iload"_s, $(InstructionFinder::precompile($Const::ILOAD_0, $Const::ILOAD_3, $Const::ILOAD)));
		$nc(InstructionFinder::map)->put("dload"_s, $(InstructionFinder::precompile($Const::DLOAD_0, $Const::DLOAD_3, $Const::DLOAD)));
		$nc(InstructionFinder::map)->put("fload"_s, $(InstructionFinder::precompile($Const::FLOAD_0, $Const::FLOAD_3, $Const::FLOAD)));
		$nc(InstructionFinder::map)->put("aload"_s, $(InstructionFinder::precompile($Const::ALOAD_0, $Const::ALOAD_3, $Const::ALOAD)));
		$nc(InstructionFinder::map)->put("lstore"_s, $(InstructionFinder::precompile($Const::LSTORE_0, $Const::LSTORE_3, $Const::LSTORE)));
		$nc(InstructionFinder::map)->put("istore"_s, $(InstructionFinder::precompile($Const::ISTORE_0, $Const::ISTORE_3, $Const::ISTORE)));
		$nc(InstructionFinder::map)->put("dstore"_s, $(InstructionFinder::precompile($Const::DSTORE_0, $Const::DSTORE_3, $Const::DSTORE)));
		$nc(InstructionFinder::map)->put("fstore"_s, $(InstructionFinder::precompile($Const::FSTORE_0, $Const::FSTORE_3, $Const::FSTORE)));
		$nc(InstructionFinder::map)->put("astore"_s, $(InstructionFinder::precompile($Const::ASTORE_0, $Const::ASTORE_3, $Const::ASTORE)));
		{
			$var($Iterator, i$, $nc($($nc(InstructionFinder::map)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, key, $cast($String, $nc(entry)->getKey()));
					$var($String, value, $cast($String, entry->getValue()));
					char16_t ch = $nc(value)->charAt(1);
					if (ch < InstructionFinder::OFFSET) {
						$nc(InstructionFinder::map)->put(key, $(InstructionFinder::compilePattern(value)));
					}
				}
			}
		}
		$var($StringBuilder, buf, $new($StringBuilder, "("_s));
		for (int16_t i = (int16_t)0; i < InstructionFinder::NO_OPCODES; ++i) {
			if ($Const::getNoOfOperands(i) != $Const::UNDEFINED) {
				buf->append(InstructionFinder::makeChar(i));
				if (i < InstructionFinder::NO_OPCODES - 1) {
					buf->append(u'|');
				}
			}
		}
		buf->append(u')');
		$nc(InstructionFinder::map)->put("instruction"_s, $(buf->toString()));
	}
}

InstructionFinder::InstructionFinder() {
}

$Class* InstructionFinder::load$($String* name, bool initialize) {
	$loadClass(InstructionFinder, name, initialize, &_InstructionFinder_ClassInfo_, clinit$InstructionFinder, allocate$InstructionFinder);
	return class$;
}

$Class* InstructionFinder::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com