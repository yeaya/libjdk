#include <com/sun/tools/javac/resources/compiler_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$MethodInfo _compiler_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(compiler_zh_CN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(compiler_zh_CN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _compiler_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.compiler_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_compiler_zh_CN_MethodInfo_
};

$Object* allocate$compiler_zh_CN($Class* clazz) {
	return $of($alloc(compiler_zh_CN));
}

void compiler_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* compiler_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.accessed.directly"_s),
			$of(u"无法直接访问{2}中的抽象{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.cant.be.instantiated"_s),
			$of(u"{0}是抽象的; 无法实例化"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.abstract.meth.cant.have.body"_s),
			$of(u"抽象方法不能有主体"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.exports.with.release"_s),
			$of(u"不允许在使用 --release 时从系统模块 {0} 导出程序包:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.add.reads.with.release"_s),
			$of(u"不允许在使用 --release 时为系统模块 {0} 添加读取维边:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.addmods.all.module.path.invalid"_s),
			$of(u"--add-modules ALL-MODULE-PATH 只能在编译未命名模块或在自动模块的上下文中编译时使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.annotated"_s),
			$of(u"{0} {1}已进行注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined"_s),
			$of(u"已在{2} {3}中定义了{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.in.clinit"_s),
			$of(u"已在{3} {4}的{2}中定义了{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.single.import"_s),
			$of(u"{0}的 single-type-import 已定义具有相同简名的类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.static.single.import"_s),
			$of(u"{0}的静态 single-type-import 已定义具有相同简名的类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.already.defined.this.unit"_s),
			$of(u"已在该编译单元中定义{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.decl.not.allowed.here"_s),
			$of(u"此处不允许注释类型声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value"_s),
			$of(u"对于元素 \'\'{1}\'\', 注释 @{0} 缺少默认值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.missing.default.value.1"_s),
			$of(u"对于元素{1}, 注释 @{0} 缺少默认值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.not.valid.for.type"_s),
			$of(u"注释对于类型{0}的元素无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable"_s),
			$of(u"注释类型不适用于该类型的声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.type.not.applicable.to.type"_s),
			$of(u"注释 @{0} 在此类型上下文中不适用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.annotation"_s),
			$of(u"注释值必须为注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.class.literal"_s),
			$of(u"注释值必须为类文字"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.must.be.name.value"_s),
			$of(u"注释值必须采用 \'\'name=value\'\' 格式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.annotation.value.not.allowable.type"_s),
			$of(u"注释值不是允许的类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.args"_s),
			$of(u"匿名类实现接口; 不能有参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.qual.for.new"_s),
			$of(u"匿名类实现接口; 不能有限定符 - 对于新"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anon.class.impl.intf.no.typeargs"_s),
			$of(u"匿名类实现接口; 不能具有类型参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.anonymous.diamond.method.does.not.override.superclass"_s),
			$of(u"方法不会覆盖或实现超类型中的方法\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.receiver"_s),
			$of(u"接收方参数不允许使用传统数组记号"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.and.varargs"_s),
			$of(u"无法在{2}中同时声明{0}和{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.dimension.missing"_s),
			$of(u"缺少数组维"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.array.req.but.found"_s),
			$of(u"需要数组, 但找到{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.assert.as.identifier"_s),
			$of(u"从发行版 1.4 开始, \'\'assert\'\' 为关键字, 不能用作标识符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.attribute.value.must.be.constant"_s),
			$of(u"元素值必须为常量表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno"_s),
			$of(u"意外的 @FunctionalInterface 注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.functional.intf.anno.1"_s),
			$of(u"意外的 @FunctionalInterface 注释\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.initializer"_s),
			$of(u"{0}的初始化程序错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.name.for.option"_s),
			$of(u"{0} 选项的值中有错误的名称: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.bad.value.for.option"_s),
			$of(u"{0} 选项的值错误: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.expression"_s),
			$of(u"尝试从 switch 表达式中断"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.break.outside.switch.loop"_s),
			$of(u"在 switch 或 loop 外部中断"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.must.be.first.stmt.in.ctor"_s),
			$of(u"对{0}的调用必须是构造器中的第一个语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.call.to.super.not.allowed.in.enum.ctor"_s),
			$of(u"在枚举构造器中不允许调用超类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.diamond"_s),
			$of(u"无法创建具有 \'\'<>\'\' 的数组"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.create.array.with.type.arguments"_s),
			$of(u"无法创建具有类型变量的数组"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cannot.generate.class"_s),
			$of(u"生成类 {0} 时出错\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.access"_s),
			$of(u"无法访问{0}\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond"_s),
			$of(u"无法推断{0}的类型参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.diamond.1"_s),
			$of(u"无法推断{0}的类型参数\n原因: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbol"_s),
			$of(u"无法将{4} {5}中的{0} {1}应用到给定类型;\n需要: {2}\n找到:    {3}\n原因: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.apply.symbols"_s),
			$of(u"对于{1}({2}), 找不到合适的{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.final.var"_s),
			$of(u"无法为最终变量{0}分配值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.assign.val.to.this"_s),
			$of(u"无法分配给 \'\'this\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.deref"_s),
			$of(u"无法取消引用{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.extend.intf.annotation"_s),
			$of(u"对于 @interfaces, 不允许 \'\'extends\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.infer.local.var.type"_s),
			$of(u"无法推断本地变量 {0} 的类型\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.diff.arg"_s),
			$of(u"无法使用以下不同的参数继承{0}: <{1}> 和 <{2}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.anon"_s),
			$of(u"无法从匿名类继承"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.final"_s),
			$of(u"无法从最终{0}进行继承"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.inherit.from.sealed"_s),
			$of(u"类不得扩展密封类：{0}（因为它未列在其 \'\'permits\'\' 子句中）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.read.file"_s),
			$of(u"无法读取: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.before.ctor.called"_s),
			$of(u"无法在调用超类型构造器之前引用{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.ref.non.effectively.final.var"_s),
			$of(u"从{1}引用的本地变量必须是最终变量或实际上的最终变量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve"_s),
			$of(u"找不到符号\n符号: {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args"_s),
			$of(u"找不到符号\n符号: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.args.params"_s),
			$of(u"找不到符号\n符号: {0} <{2}>{1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location"_s),
			$of(u"找不到符号\n符号:   {0} {1}\n位置: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args"_s),
			$of(u"找不到符号\n符号:   {0} {1}({3})\n位置: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.resolve.location.args.params"_s),
			$of(u"找不到符号\n符号:   {0} <{2}>{1}({3})\n位置: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.select.static.class.from.param.type"_s),
			$of(u"无法从参数化的类型中选择静态类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping"_s),
			$of(u"无法使用 type-use 注释 {0} 来注释确定作用域结构"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cant.type.annotate.scoping.1"_s),
			$of(u"无法使用 type-use 注释 {0} 来注释确定作用域结构"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.catch.without.try"_s),
			$of(u"有 \'\'catch\'\', 但是没有 \'\'try\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.clash.with.pkg.of.same.name"_s),
			$of(u"{0} {1}与带有相同名称的程序包冲突"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.cant.write"_s),
			$of(u"写入{0}时出错: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.module.cant.extend.sealed.in.diff.module"_s),
			$of(u"模块 {1} 中的类 {0} 无法扩展其他模块中的密封类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s),
			$of(u"未命名模块中的类 {0} 无法扩展其他程序包中的密封类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.not.allowed"_s),
			$of(u"此处不允许使用类, 接口或枚举声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.class.public.should.be.in.file"_s),
			$of(u"{0} {1} 是公共的, 应在名为 {1}.java 的文件中声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.concrete.inheritance.conflict"_s),
			$of(u"{1}中的方法{0}和{3}中的方法{2}是使用相同的签名继承的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports"_s),
			$of(u"重复或冲突的导出操作: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.exports.to.module"_s),
			$of(u"重复或冲突的导出到模块操作: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens"_s),
			$of(u"重复或冲突的打开操作: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.conflicting.opens.to.module"_s),
			$of(u"重复或冲突的打开到模块操作: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.const.expr.req"_s),
			$of(u"需要常量表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cont.outside.loop"_s),
			$of(u"continue 在 loop 外部"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.continue.outside.switch.expression"_s),
			$of(u"尝试从 switch 表达式继续"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.annotation.element"_s),
			$of(u"元素 {0} 的类型为循环"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.inheritance"_s),
			$of(u"涉及{0}的循环继承"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.cyclic.requires"_s),
			$of(u"涉及 {0} 的循环被依赖对象"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.entity"_s),
			$of(u"HTML 实体错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.bad.inline.tag"_s),
			$of(u"内嵌标记的用法不正确"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.gt.expected"_s),
			$of(u"需要 \'\'>\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.identifier.expected"_s),
			$of(u"需要标识符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.malformed.html"_s),
			$of(u"格式错误的 HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.missing.semicolon"_s),
			$of(u"缺少分号"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.content"_s),
			$of(u"无内容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.no.tag.name"_s),
			$of(u"\'@\' 后没有标记名"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.bad.parens"_s),
			$of(u"引用中缺少 \'\')\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.syntax.error"_s),
			$of(u"引用中出现语法错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.ref.unexpected.input"_s),
			$of(u"意外的文本"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unexpected.content"_s),
			$of(u"意外的内容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.inline.tag"_s),
			$of(u"未终止的内嵌标记"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.signature"_s),
			$of(u"未终止的签名"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dc.unterminated.string"_s),
			$of(u"未终止的字符串"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.allowed.in.intf.annotation.member"_s),
			$of(u"注释类型声明中仅允许默认值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.default.overrides.object.member"_s),
			$of(u"{1} {2} 中的默认方法{0}覆盖了 java.lang.Object 的成员"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.does.not.override.abstract"_s),
			$of(u"{0}不是抽象的, 并且未覆盖{2}中的抽象方法{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.doesnt.exist"_s),
			$of(u"程序包{0}不存在"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.dot.class.expected"_s),
			$of(u"需要 \'\'.class\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.invalid.repeated"_s),
			$of(u"注释{0}不是有效的可重复注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.member.value"_s),
			$of(u"注释@{1}中的元素 \'\'{0}\'\' 重复。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.annotation.missing.container"_s),
			$of(u"{0} 不是可重复的注释类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.case.label"_s),
			$of(u"case 标签重复"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.class"_s),
			$of(u"类重复: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.default.label"_s),
			$of(u"default 标签重复"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module"_s),
			$of(u"重复的模块: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.module.on.path"_s),
			$of(u"{1} 中的 {0} 上存在\n重复的模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.provides"_s),
			$of(u"重复的 provides 指令: 服务 {0}, 实现 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.requires"_s),
			$of(u"重复的 requires 指令: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.duplicate.uses"_s),
			$of(u"重复的 uses 指令: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.else.without.if"_s),
			$of(u"有 \'\'if\'\', 但是没有 \'\'else\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.A.argument"_s),
			$of(u"-A 需要一个参数; 使用 \'\'-Akey\'\' 或 \'\'-Akey=value\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.empty.char.lit"_s),
			$of(u"空字符文字"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.encl.class.required"_s),
			$of(u"需要包含{0}的封闭实例"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.annotation.must.be.enum.constant"_s),
			$of(u"枚举注释值必须是枚举常量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.as.identifier"_s),
			$of(u"从发行版 5 开始, \'\'enum\'\' 为关键字, 不能用作标识符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.cant.be.instantiated"_s),
			$of(u"无法实例化枚举类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.expected"_s),
			$of(u"此处需要枚举常量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.constant.not.expected"_s),
			$of(u"此处不需要枚举常量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.label.must.be.unqualified.enum"_s),
			$of(u"枚举 switch case 标签必须为枚举常量的非限定名称"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.finalize"_s),
			$of(u"枚举不能有 finalize 方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.no.subclassing"_s),
			$of(u"类无法直接扩展 java.lang.Enum"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.enum.types.not.extensible"_s),
			$of(u"枚举类型不可继承"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error"_s),
			$of(u"错误: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.reading.file"_s),
			$of(u"读取{0}时出错; {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.error.writing.file"_s),
			$of(u"写入 {0} 时出错；{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.already.caught"_s),
			$of(u"已捕获到异常错误{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.except.never.thrown.in.try"_s),
			$of(u"在相应的 try 语句主体中不能抛出异常错误{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected"_s),
			$of(u"需要{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module"_s),
			$of(u"预期 \'\'module\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.module.or.open"_s),
			$of(u"需要 \'\'module\'\' 或 \'\'open\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected.str"_s),
			$of(u"需要 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected2"_s),
			$of(u"需要{0}或{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected3"_s),
			$of(u"需要{0}, {1}或{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expected4"_s),
			$of(u"需要 {0}、{1}、{2} 或 {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.expression.not.allowable.as.annotation.value"_s),
			$of(u"表达式不允许用作注释值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source"_s),
			$of(u"-source {1} 中不支持 {0}\n(请使用 -source {2} 或更高版本以启用 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.feature.not.supported.in.source.plural"_s),
			$of(u"-source {1} 中不支持 {0}\n(请使用 -source {2} 或更高版本以启用 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.directory"_s),
			$of(u"不是目录：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.file"_s),
			$of(u"不是文件：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.not.found"_s),
			$of(u"找不到文件: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.patched.and.msp"_s),
			$of(u"可从 --patch-module 和 --module-source-path 访问文件, 但该文件在每个路径中属于不同的模块: {0}, {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.file.sb.on.source.or.patch.path.for.module"_s),
			$of(u"文件应在源路径或模块的补丁程序路径中"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.final.parameter.may.not.be.assigned"_s),
			$of(u"不能分配最终参数{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.finally.without.try"_s),
			$of(u"有 \'\'finally\'\', 但是没有 \'\'try\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.first.statement.must.be.call.to.another.constructor"_s),
			$of(u"构造器不是规范的，因此它的第一个语句必须调用类 {0} 的另一个构造器"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.foreach.not.applicable.to.type"_s),
			$of(u"for-each 不适用于表达式类型\n要求: {1}\n找到:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.large"_s),
			$of(u"浮点数过大"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.fp.number.too.small"_s),
			$of(u"浮点数过小"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.array.creation"_s),
			$of(u"创建泛型数组"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.generic.throwable"_s),
			$of(u"泛型类不能扩展 java.lang.Throwable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.icls.cant.have.static.decl"_s),
			$of(u"内部类{0}中的静态声明非法\n修饰符 \'\'static\'\' 仅允许在常量变量声明中使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.argument.for.option"_s),
			$of(u"{0} 的参数非法: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.array.creation.both.dimension.and.initialization"_s),
			$of(u"同时使用维表达式和初始化创建数组是非法的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char"_s),
			$of(u"非法字符: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.char.for.encoding"_s),
			$of(u"编码 {1} 的不可映射字符 (0x{0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.combination.of.modifiers"_s),
			$of(u"非法的修饰符组合: {0}和{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.default.super.call"_s),
			$of(u"默认超级调用中的类型限定符{0}错误\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.dot"_s),
			$of(u"非法 \'\'.\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.enum.static.ref"_s),
			$of(u"初始化程序中对静态字段的引用不合法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.esc.char"_s),
			$of(u"非法转义符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.forward.ref"_s),
			$of(u"非法前向引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.initializer.for.type"_s),
			$of(u"{0}的初始化程序不合法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.line.end.in.char.lit"_s),
			$of(u"字符文字的行结尾不合法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.nonascii.digit"_s),
			$of(u"非法的非 ASCII 数字"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.parenthesized.expression"_s),
			$of(u"非法的含括号表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.qual.not.icls"_s),
			$of(u"非法限定符; {0}不是内部类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.record.component.name"_s),
			$of(u"记录组件名称 {0} 非法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.ref.to.restricted.type"_s),
			$of(u"对受限制类型 \'\'{0}\'\' 的引用非法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.self.ref"_s),
			$of(u"初始化程序中存在自引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.expr"_s),
			$of(u"非法的表达式开始"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.stmt"_s),
			$of(u"非法的语句开始"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.start.of.type"_s),
			$of(u"非法的类型开始"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.static.intf.meth.call"_s),
			$of(u"静态接口方法调用非法\n应将接收方表达式替换为类型限定符 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.text.block.open"_s),
			$of(u"文本块起始分隔符序列非法，缺少行终止符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.underscore"_s),
			$of(u"非法下划线"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.illegal.unicode.esc"_s),
			$of(u"非法的 Unicode 转义"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.import.requires.canonical"_s),
			$of(u"导入需要{0}的规范名称"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.inner.raw.param"_s),
			$of(u"类型的格式不正确, 给出了原始类型的类型参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.improperly.formed.type.param.missing"_s),
			$of(u"类型的格式不正确, 缺少某些参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incomparable.types"_s),
			$of(u"不可比较的类型: {0}和{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incompatible.thrown.types.in.mref"_s),
			$of(u"函数表达式中抛出的类型 {0} 不兼容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.name"_s),
			$of(u"接收方名称与外部封闭类类型不匹配\n需要: {0}\n找到:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.constructor.receiver.type"_s),
			$of(u"接收方类型与外部封闭类类型不匹配\n需要: {0}\n找到:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.name"_s),
			$of(u"接收方名称与封闭类类型不匹配\n需要: {0}\n找到:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.incorrect.receiver.type"_s),
			$of(u"接收方类型与封闭类类型不匹配\n需要: {0}\n找到:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.must.be.able.to.complete.normally"_s),
			$of(u"初始化程序必须能够正常完成"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.initializer.not.allowed"_s),
			$of(u"接口中不允许有初始化程序"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instance.initializer.not.allowed.in.records"_s),
			$of(u"记录中不允许使用实例初始化程序"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.pattern.no.subtype"_s),
			$of(u"模式类型 {0} 是表达式类型 {1} 的子类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.instanceof.reifiable.not.safe"_s),
			$of(u"{0} 无法安全地转换为 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.int.number.too.large"_s),
			$of(u"整数太大"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.cant.have.type.params"_s),
			$of(u"注释类型 {0} 不能为泛型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.member.clash"_s),
			$of(u"注释类型{1}声明与方法 {0} 同名的元素"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.params"_s),
			$of(u"注释类型声明中的元素无法声明形参"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.annotation.members.cant.have.type.params"_s),
			$of(u"注释类型声明中的元素不能为泛型方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.expected.here"_s),
			$of(u"此处需要接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.meth.cant.have.body"_s),
			$of(u"接口抽象方法不能带有主体"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.intf.not.allowed.here"_s),
			$of(u"此处不允许使用接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.A.key"_s),
			$of(u"注释处理程序选项 \'\'{0}\'\' 中的关键字不是以点分隔的标识符序列"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.accessor.method.in.record"_s),
			$of(u"记录 {0} 中的存取方法无效\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.annotation.member.type"_s),
			$of(u"注释类型元素的类型无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.binary.number"_s),
			$of(u"二进制数字中必须包含至少一个二进制数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.canonical.constructor.in.record"_s),
			$of(u"记录 {1} 中的 {0} 构造器无效\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.flag"_s),
			$of(u"无效的标记: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.hex.number"_s),
			$of(u"十六进制数字必须包含至少一位十六进制数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.lambda.parameter.declaration"_s),
			$of(u"无效的 lambda 参数声明\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.meth.decl.ret.type.req"_s),
			$of(u"方法声明无效; 需要返回类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.directive"_s),
			$of(u"预期为模块指令关键字或 \'\'}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.module.specifier"_s),
			$of(u"不允许模块说明符: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.mref"_s),
			$of(u"{0}引用无效\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.path"_s),
			$of(u"无效文件名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.permits.clause"_s),
			$of(u"无效的 permits 子句\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.profile"_s),
			$of(u"无效的配置文件：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation"_s),
			$of(u"注释重复: 使用无效的 @Repeatable 注释对{0}进行了注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.elem.nondefault"_s),
			$of(u"对于元素 {1}, 包含注释类型 ({0}) 没有默认值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.incompatible.target"_s),
			$of(u"包含注释类型 ({0}) 适用的目标多于可重复注释类型 ({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.invalid.value"_s),
			$of(u"{0}不是有效的 @Repeatable: 值元素无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.multiple.values"_s),
			$of(u"{0}不是有效的 @Repeatable, 已声明 {1} 个名为 \'\'value\'\' 的元素方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.no.value"_s),
			$of(u"{0}不是有效的 @Repeatable, 未声明任何值元素方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable"_s),
			$of(u"容器{0}不适用于元素 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.applicable.in.context"_s),
			$of(u"容器{0}在此类型上下文中不适用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.documented"_s),
			$of(u"可重复注释类型 ({1}) 是 @Documented, 而包含注释类型 ({0}) 则不是"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.not.inherited"_s),
			$of(u"可重复注释类型 ({1}) 是 @Inherited, 而包含注释类型 ({0}) 则不是"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.repeated.and.container.present"_s),
			$of(u"容器 {0} 不得与其包含的元素同时存在"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.retention"_s),
			$of(u"包含注释类型 ({0}) 的保留期短于可重复注释类型 ({2}) 的保留期"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.repeatable.annotation.value.return"_s),
			$of(u"包含注释类型 ({0}) 必须声明类型{2}的名为 \'\'value\'\' 的元素"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.source"_s),
			$of(u"无效的源发行版：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.supertype.record"_s),
			$of(u"类无法直接扩展 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.target"_s),
			$of(u"无效的目标发行版：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.invalid.yield"_s),
			$of(u"受限标识符 \'\'yield\'\' 的用法无效\n（要调用称为 yield 的方法，请通过接收方或类型名称限定 yield）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.io.exception"_s),
			$of(u"读取源文件时出错: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.is.preview"_s),
			$of(u"{0} 是某预览功能中的一个 API"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.label.already.in.use"_s),
			$of(u"标签{0}已使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.lambda.body.neither.value.nor.void.compatible"_s),
			$of(u"lambda 主体不是值, 也不与 void 兼容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code"_s),
			$of(u"代码过长"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.code.too.large.for.try.stmt"_s),
			$of(u"try 语句的代码过长"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.dimensions"_s),
			$of(u"数组类型维过多"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.locals"_s),
			$of(u"本地变量过多"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.parameters"_s),
			$of(u"参数过多"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool"_s),
			$of(u"常量过多"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.pool.in.class"_s),
			$of(u"类{0}中的常量过多"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.stack"_s),
			$of(u"代码需要过多堆栈"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string"_s),
			$of(u"常量字符串过长"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.limit.string.overflow"_s),
			$of(u"对于常量池来说, 字符串 \"{0}...\" 的 UTF8 表示过长"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.classes.cant.extend.sealed"_s),
			$of(u"{0} 类不得扩展密封类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.enum"_s),
			$of(u"枚举类型不能为本地类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.local.var.accessed.from.icls.needs.final"_s),
			$of(u"从内部类中访问本地变量{0}; 需要被声明为最终类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.bad.module-info"_s),
			$of(u"读取 {0} 中的 module-info.class 时出现问题"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.get.module.name.for.jar"_s),
			$of(u"无法确定 {0} 的模块名称"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.directory"_s),
			$of(u"无法读取目录 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.cant.read.file"_s),
			$of(u"无法读取文件 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.invalid.arg.for.xpatch"_s),
			$of(u"--patch-module 选项的参数无效: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.locn.module-info.not.allowed.on.patch.path"_s),
			$of(u"在补丁程序路径中不允许 module-info.class: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.malformed.fp.lit"_s),
			$of(u"浮点文字的格式错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.match.binding.exists"_s),
			$of(u"尝试重新定义现有的匹配绑定，这是非法的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.method.does.not.override.superclass"_s),
			$of(u"方法不会覆盖或实现超类型的方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.meth.body.or.decl.abstract"_s),
			$of(u"缺少方法主体, 或声明抽象"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.missing.ret.stmt"_s),
			$of(u"缺少返回语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.mod.not.allowed.here"_s),
			$of(u"此处不允许使用修饰符{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modifier.not.allowed.here"_s),
			$of(u"此处不允许使用修饰符{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.decl.sb.in.module-info.java"_s),
			$of(u"模块声明应该在名为 module-info.java 的文件中"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.name.mismatch"_s),
			$of(u"模块名称 {0} 与预期名称 {1} 不匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.non.zero.opens"_s),
			$of(u"打开的模块 {0} 具有非零 opens_count"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found"_s),
			$of(u"找不到模块: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.in.module.source.path"_s),
			$of(u"在模块源路径中找不到模块 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.module.not.found.on.module.source.path"_s),
			$of(u"在模块源路径中找不到模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.modulesourcepath.must.be.specified.with.dash.m.option"_s),
			$of(u"如果使用 -m 选项, 则必须指定模块源路径"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multi-module.outdir.cannot.be.exploded.module"_s),
			$of(u"在多模块模式下, 输出目录不能是展开的模块: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.parameter.may.not.be.assigned"_s),
			$of(u"可能未分配 multi-catch 参数{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multicatch.types.must.be.disjoint"_s),
			$of(u"multi-catch 语句中的替代无法通过子类化关联\n替代{0}是替代{1}的子类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.multiple.values.for.module.source.path"_s),
			$of(u"使用模式参数多次指定了 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure"_s),
			$of(u"名称冲突: {0}和{1}具有相同疑符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.hide"_s),
			$of(u"名称冲突: {1} 中的 {0} 和 {3} 中的 {2} 具有相同疑符, 但两者均不隐藏对方"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override"_s),
			$of(u"名称冲突: {2} 中的 {0}({1}) 和 {5} 中的 {3}({4}) 具有相同疑符, 但两者均不覆盖对方"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.clash.same.erasure.no.override.1"_s),
			$of(u"名称冲突: {0} {1} 的两种方法具有相同的疑符, 但两者均不覆盖对方\n第一种方法: {4} 中的 {2}({3})\n第二种方法: {7} 中的 {5}({6})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.name.reserved.for.internal.use"_s),
			$of(u"{0}为内部使用保留"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.native.meth.cant.have.body"_s),
			$of(u"本机方法不能带有主体"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.new.not.allowed.in.annotation"_s),
			$of(u"注释中不允许使用 \'\'new\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotation.member"_s),
			$of(u"{1}中没有注释成员{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.annotations.on.dot.class"_s),
			$of(u"类文字类型中不允许使用任何注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.encl.instance.of.type.in.scope"_s),
			$of(u"作用域中没有类型为{0}的封闭实例"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.intf.expected.here"_s),
			$of(u"此处不需要接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.match.entry"_s),
			$of(u"{0}在{1}的条目中没有匹配项; 需要{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.opens.unless.strong"_s),
			$of(u"只允许在强模块中使用 \'\'opens\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.output.dir"_s),
			$of(u"未指定类输出目录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.pkg.in.module-info.java"_s),
			$of(u"文件 module-info.java 中不允许使用程序包声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files"_s),
			$of(u"无源文件"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.source.files.classes"_s),
			$of(u"无源文件或类名"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.superclass"_s),
			$of(u"{0}不具有超类。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression"_s),
			$of(u"yield 在 switch 表达式外部"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.switch.expression.qualify"_s),
			$of(u"yield 在 switch 表达式外部\n（要调用称为 yield 的方法，请通过接收方或类型名称限定 yield）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.value.for.option"_s),
			$of(u"{0} 选项没有值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.no.zipfs.for.archive"_s),
			$of(u"没有任何文件系统提供方可处理此文件: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non-static.cant.be.ref"_s),
			$of(u"无法从静态上下文中引用非静态 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.or.sealed.expected"_s),
			$of(u"需要密封或非密封修饰符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.sealed.or.final.expected"_s),
			$of(u"需要密封、非密封或最终修饰符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.non.sealed.with.no.sealed.supertype"_s),
			$of(u"此处不允许使用非密封修饰符\n（类 {0} 不具有任何密封的超类型）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.annotation.type"_s),
			$of(u"{0}不是注释类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access"_s),
			$of(u"{1}.{0} 是在不可访问的类或接口中定义的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.class.intf.cant.access.reason"_s),
			$of(u"程序包 {2} 中的 {1}.{0} 不可访问\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.access.package.cant.access"_s),
			$of(u"{0} 不可见\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public"_s),
			$of(u"{0} 在 {1} 中不是公共的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.def.public.cant.access"_s),
			$of(u"{0}在{1}中不是公共的; 无法从外部程序包中对其进行访问"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.encl.class"_s),
			$of(u"不是封闭类: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.exhaustive"_s),
			$of(u"switch 表达式不包含所有可能的输入值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.module.on.module.source.path"_s),
			$of(u"不在模块源路径上的模块中"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.in.profile"_s),
			$of(u"{0}在配置文件 \'\'{1}\'\' 中不可用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.loop.label"_s),
			$of(u"不是 loop 标签: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.stmt"_s),
			$of(u"不是语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.not.within.bounds"_s),
			$of(u"类型参数{0}不在类型变量{1}的范围内"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied"_s),
			$of(u"一元运算符 \'\'{0}\'\' 的操作数类型{1}错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.operator.cant.be.applied.1"_s),
			$of(u"二元运算符 \'\'{0}\'\' 的操作数类型错误\n第一个类型:  {1}\n第二个类型: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.not.allowed.with.target"_s),
			$of(u"目标 {1} 不允许选项 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.source"_s),
			$of(u"不再支持源选项 {0}。请使用 {1} 或更高版本。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.removed.target"_s),
			$of(u"不再支持目标选项 {0}。请使用 {1} 或更高版本。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.option.too.many"_s),
			$of(u"选项 {0} 只能指定一次"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.orphaned"_s),
			$of(u"孤立的{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.output.dir.must.be.specified.with.dash.m.option"_s),
			$of(u"如果使用 -m 选项, 则必须指定类输出目录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.incompatible.ret"_s),
			$of(u"{0}\n返回类型{1}与{2}不兼容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth"_s),
			$of(u"{0}\n被覆盖的方法为{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.meth.doesnt.throw"_s),
			$of(u"{0}\n被覆盖的方法未抛出{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.static"_s),
			$of(u"{0}\n覆盖的方法为 static"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.override.weaker.access"_s),
			$of(u"{0}\n正在尝试分配更低的访问权限; 以前为{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires"_s),
			$of(u"模块 {0} 同时从 {2} 和 {3} 读取程序包 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.clash.from.requires.in.unnamed"_s),
			$of(u"未命名的模块同时从 {1} 和 {2} 读取程序包 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.empty.or.not.found"_s),
			$of(u"程序包为空或不存在: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.in.other.module"_s),
			$of(u"程序包已存在于另一个模块中: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.package.not.visible"_s),
			$of(u"程序包 {0} 不可见\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.annotations.sb.in.package-info.java"_s),
			$of(u"程序包注释应在文件 package-info.java 中"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.pkg.clashes.with.class.of.same.name"_s),
			$of(u"程序包{0}与带有相同名称的类冲突"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.plugin.not.found"_s),
			$of(u"找不到插件: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.premature.eof"_s),
			$of(u"进行语法分析时已到达文件结尾"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled"_s),
			$of(u"{0} 是预览功能，默认情况下禁用。\n（请使用 --enable-preview 以启用 {0}）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.classfile"_s),
			$of(u"{0} 的类文件使用 Java SE {1} 的预览功能。\n（请使用 --enable-preview 以允许加载包含预览功能的类文件）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.feature.disabled.plural"_s),
			$of(u"{0} 是预览功能，默认情况下禁用。\n（请使用 --enable-preview 以启用 {0}）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.not.latest"_s),
			$of(u"源发行版 {0} 与 --enable-preview 一起使用时无效\n（仅发行版 {1} 支持预览语言功能）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.preview.without.source.or.release"_s),
			$of(u"--enable-preview 必须与 -source 或 --release 一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.prob.found.req"_s),
			$of(u"不兼容的类型: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.bad.config.file"_s),
			$of(u"服务配置文件不正确, 或构造处理程序对象{0}时抛出异常错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access"_s),
			$of(u"无法访问{0}\n{1}\n有关详细信息, 请参阅以下堆栈跟踪。\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.access.1"_s),
			$of(u"无法访问{0}\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.create.loader"_s),
			$of(u"无法为注释处理程序{0}创建类加载器"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.find.class"_s),
			$of(u"找不到 \'\'{0}\'\' 的类文件。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.cant.load.class"_s),
			$of(u"由于 \'\'{0}\'\'，无法加载处理器类文件。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.explicit.annotation.processing.requested"_s),
			$of(u"仅当显式请求注释处理时才接受类名称 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.no.service"_s),
			$of(u"ServiceLoader 不可用, 但它是注释处理所必需的。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.bad.option.name"_s),
			$of(u"处理程序 \'\'{1}\'\' 提供的选项名称 \'\'{0}\'\' 错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.cant.instantiate"_s),
			$of(u"无法实例化处理程序 \'\'{0}\'\' 的实例"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.not.found"_s),
			$of(u"找不到注释处理程序 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.processor.wrong.type"_s),
			$of(u"注释处理程序 \'\'{0}\'\' 未实现 javax.annotation.processing.Processor"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.proc.service.problem"_s),
			$of(u"创建服务加载器以加载处理程序时出错。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.processorpath.no.processormodulepath"_s),
			$of(u"-processorpath 与 --processor-module-path 的组合非法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.profile.bootclasspath.conflict"_s),
			$of(u"概要信息和引导类路径选项不能同时使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.qualified.new.of.static.class"_s),
			$of(u"限定的新静态类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.receiver.parameter.not.applicable.constructor.toplevel.class"_s),
			$of(u"接收方参数不适用于顶层类的构造器"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cannot.declare.instance.fields"_s),
			$of(u"字段声明必须为静态\n（考虑将字段替换为记录组件）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.cant.declare.field.modifiers"_s),
			$of(u"记录组件不能具有限定符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.component.and.old.array.syntax"_s),
			$of(u"记录组件中不允许使用传统数组记号"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.record.header.expected"_s),
			$of(u"需要记录标头"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.recursive.ctor.invocation"_s),
			$of(u"递归构造器调用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ref.ambiguous"_s),
			$of(u"对{0}的引用不明确\n{3} 中的{1} {2} 和 {6} 中的{4} {5} 都匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.release.bootclasspath.conflict"_s),
			$of(u"选项 {0} 不能与 --release 一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.annotation.target"_s),
			$of(u"注释目标重复"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.interface"_s),
			$of(u"接口重复"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.modifier"_s),
			$of(u"修饰符重复"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.provides.for.service"_s),
			$of(u"服务 {0} 有多个 \'\'provides\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.module.source.path"_s),
			$of(u"为模块 {0} 多次指定了 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.repeated.value.for.patch.module"_s),
			$of(u"为模块 {0} 多次指定了 --patch-module"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.report.access"_s),
			$of(u"{0} 在 {2} 中是 {1} 访问控制"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.req.arg"_s),
			$of(u"{0} 需要参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed"_s),
			$of(u"此处不允许使用 \'\'{0}\'\'\n从发行版 {1} 开始，\'\'{0}\'\' 是受限类型名称，不能用于类型声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.array"_s),
			$of(u"\'\'{0}\'\' 不允许用作数组的元素类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.compound"_s),
			$of(u"\'\'{0}\'\' 不允许在复合声明中使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.restricted.type.not.allowed.here"_s),
			$of(u"此处不允许使用 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.ret.outside.meth"_s),
			$of(u"返回外部方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.return.outside.switch.expression"_s),
			$of(u"尝试从 switch 表达式返回"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.rule.completes.normally"_s),
			$of(u"switch 规则完结但没有提供值\n（switch 表达式中的 switch 规则必须提供值或抛出）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.same.binary.name"_s),
			$of(u"类：{0} 和 {1} 具有相同的二进制名称"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.class.must.have.subclasses"_s),
			$of(u"密封类必须具有子类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sealed.or.non.sealed.local.classes.not.allowed"_s),
			$of(u"不允许使用密封或非密封本地类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.definition.is.enum"_s),
			$of(u"服务定义是枚举: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.doesnt.have.a.no.args.constructor"_s),
			$of(u"服务实现没有默认的构造器: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.abstract"_s),
			$of(u"服务实现是抽象类: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.is.inner"_s),
			$of(u"服务实现是内部类: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.must.be.subtype.of.service.interface"_s),
			$of(u"服务实现类型必须是服务接口类型的子类型, 或者具有名为 \"provider\" 的, 返回服务实现的公共静态无参数方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.no.args.constructor.not.public"_s),
			$of(u"服务实现的无参数构造器不是公共构造器: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.not.in.right.module"_s),
			$of(u"必须在与 provides 指令相同的模块中定义服务实现"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.service.implementation.provider.return.must.be.subtype.of.service.interface"_s),
			$of(u"\"provider\" 方法返回类型必须是服务接口类型的子类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.intf"_s),
			$of(u"签名与{0}不匹配; 不兼容的接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.signature.doesnt.match.supertype"_s),
			$of(u"签名与{0}不匹配; 不兼容的超类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.source.cant.overwrite.input.file"_s),
			$of(u"写入源时出错; 无法覆盖输入文件{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.sourcepath.modulesourcepath.conflict"_s),
			$of(u"无法同时指定 --source-path 与 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.stack.sim.error"_s),
			$of(u"内部错误: {0}中的堆栈 sim 错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.declaration.not.allowed.in.inner.classes"_s),
			$of(u"内部类中不允许使用静态声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.imp.only.classes.and.interfaces"_s),
			$of(u"仅从类和接口静态导入"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.static.methods.cannot.be.annotated.with.override"_s),
			$of(u"不能使用 @Override 注释静态方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.string.const.req"_s),
			$of(u"需要常量字符串表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.case.unexpected.statement"_s),
			$of(u"case 中存在意外语句，应为表达式、块或抛出语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.completes.normally"_s),
			$of(u"switch 表达式完结但没有提供值\n（switch 表达式必须为所有可能的输入值提供值或抛出）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.empty"_s),
			$of(u"switch 表达式中没有任何 case 子句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.expression.no.result.expressions"_s),
			$of(u"switch 表达式没有任何结果表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.mixing.case.types"_s),
			$of(u"在 switch 中使用了不同 case 类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.switch.null.not.allowed"_s),
			$of(u"case 中不允许使用空标签"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.this.as.identifier"_s),
			$of(u"从发行版 8 开始，\'\'this\'\' 只能作为接收方类型的参数名，\n该参数必须为第一个参数，并且不能是 lambda 参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.throws.not.allowed.in.intf.annotation"_s),
			$of(u"@interface 成员中不允许使用 throws 子句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.modules"_s),
			$of(u"找到太多的模块声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.too.many.patched.modules"_s),
			$of(u"太多打补丁的模块 ({0}), 请使用 --module-source-path"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.resource.may.not.be.assigned"_s),
			$of(u"可能未分配可自动关闭的资源{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.effectively.final.var"_s),
			$of(u"用作 try-with-resources 资源的变量 {0} 既不是最终变量, 也不是实际上的最终变量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.with.resources.expr.needs.var"_s),
			$of(u"try-with-resources 资源必须是变量声明, 或者是指示对最终变量或实际上的最终变量的引用的表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.try.without.catch.finally.or.resource.decls"_s),
			$of(u"\'\'try\'\' 不带有 \'\'catch\'\', \'\'finally\'\' 或资源声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.1"_s),
			$of(u"javac 在多个类加载器之间拆分: 请检查配置"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.two.class.loaders.2"_s),
			$of(u"javac 在多个类加载器之间拆分:\n一个类来自文件: {0}\n而 javac 来自 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.doesnt.take.params"_s),
			$of(u"类型{0}不带有参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.found.req"_s),
			$of(u"意外的类型\n需要: {1}\n找到:    {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.cant.be.deref"_s),
			$of(u"无法从类型变量中进行选择"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.may.not.be.followed.by.other.bounds"_s),
			$of(u"类型变量后面不能带有其他限制范围"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once"_s),
			$of(u"类型变量{0}在{1}的结果类型中多次出现; 必须对其进行实例化"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.type.var.more.than.once.in.result"_s),
			$of(u"类型变量{0}在{1}的类型中多次出现; 必须对其进行实例化"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.types.incompatible"_s),
			$of(u"类型 {0} 和 {1} 不兼容；\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.char.lit"_s),
			$of(u"未结束的字符文字"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.comment"_s),
			$of(u"未结束的注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.str.lit"_s),
			$of(u"未结束的字符串文字"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unclosed.text.block"_s),
			$of(u"文本块未闭合"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.undef.label"_s),
			$of(u"未定义的标签: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier"_s),
			$of(u"从发行版 9 开始, \'\'_\'\' 为关键字, 不能用作标识符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.underscore.as.identifier.in.lambda"_s),
			$of(u"\'\'_\'\' 用作标识符\n(对于 lambda 参数, 禁止将 \'\'_\'\' 用作标识符)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.lambda"_s),
			$of(u"此处不应为 lambda 表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.mref"_s),
			$of(u"此处不应为方法引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unexpected.type"_s),
			$of(u"意外的类型\n需要: {0}\n找到:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unmatched.quote"_s),
			$of(u"环境变量 {0} 中的引号不成对"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unnamed.pkg.not.allowed.named.modules"_s),
			$of(u"命名模块中不允许未命名程序包"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreachable.stmt"_s),
			$of(u"无法访问的语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.default.constructor"_s),
			$of(u"默认构造器中未报告的异常错误{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.implicit.close"_s),
			$of(u"未报告的异常错误{0}; 必须对其进行捕获或声明以便抛出\n对资源变量 \'\'{1}\'\' 隐式调用 close() 时抛出了异常错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unreported.exception.need.to.catch.or.throw"_s),
			$of(u"未报告的异常错误{0}; 必须对其进行捕获或声明以便抛出"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.encoding"_s),
			$of(u"不支持的编码: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.unsupported.release.version"_s),
			$of(u"不支持发行版本 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.already.be.assigned"_s),
			$of(u"可能已分配变量{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.be.assigned.in.loop"_s),
			$of(u"可能在 loop 中分配了变量{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.might.not.have.been.initialized"_s),
			$of(u"可能尚未初始化变量{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.var.not.initialized.in.default.constructor"_s),
			$of(u"变量 {0} 未在默认构造器中初始化"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.old.array.syntax"_s),
			$of(u"variable-arity 参数中不允许使用传统数组记号"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.and.receiver"_s),
			$of(u"接收方参数不允许使用 varargs 记号"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.invalid.trustme.anno"_s),
			$of(u"{0} 注释无效。{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.varargs.must.be.last"_s),
			$of(u"varargs 参数必须是最后一个参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.variable.not.allowed"_s),
			$of(u"此处不允许使用变量声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.void.not.allowed.here"_s),
			$of(u"此处不允许使用 \'\'空\'\' 类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.warnings.and.werror"_s),
			$of(u"发现警告, 但指定了 -Werror"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.number.type.args"_s),
			$of(u"类型变量数目错误; 需要{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.err.wrong.receiver"_s),
			$of(u"错误的接收方参数名"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.cant.throw.exception"_s),
			$of(u"对于存取方法不允许使用 throws 子句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.generic"_s),
			$of(u"存取方法不能为泛型方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.method.must.not.be.static"_s),
			$of(u"存取方法不能为静态方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.accessor.return.type.doesnt.match"_s),
			$of(u"存取方法 {0} 的返回类型必须与记录组件 {1} 的类型相匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anachronistic.module.info"_s),
			$of(u"在 {0}.{1} 版类文件中找到模块声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous"_s),
			$of(u"匿名"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.anonymous.class"_s),
			$of(u"<匿名{0}>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found"_s),
			$of(u"找到第 {0} 个适用方法: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.applicable.method.found.1"_s),
			$of(u"找到第 {0} 个适用方法: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.arg.length.mismatch"_s),
			$of(u"实际参数列表和形式参数列表长度不同"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file"_s),
			$of(u"类文件对于类 {0} 无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.file.header"_s),
			$of(u"错误的类文件: {0}\n{1}\n请删除该文件或确保该文件位于正确的类路径子目录中。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.class.signature"_s),
			$of(u"错误的类签名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.entry"_s),
			$of(u"{0} 中错误的常量池条目\n预期为索引 {2} 处的 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.index"_s),
			$of(u"{0} 中的常量池索引错误\n索引 {1} 不在池大小 {2} 内。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag"_s),
			$of(u"错误的常量池标记: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.const.pool.tag.at"_s),
			$of(u"错误的常量池标记: {0}, 位于{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.range"_s),
			$of(u"{1} 的常量值 \'\'{0}\'\' 超出了 {2} 的预期范围"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value"_s),
			$of(u"{1} 的常量值 \'\'{0}\'\' 错误, 预期为 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.constant.value.type"_s),
			$of(u"\'\'{0}\'\' 类型的变量不能具有常量值，但是为其指定了一个常量值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.class"_s),
			$of(u"{0}的封闭类错误: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.enclosing.method"_s),
			$of(u"类 {0} 的封闭方法属性错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.instance.method.in.unbound.lookup"_s),
			$of(u"在未绑定查找中找到意外的实例 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.intersection.target.for.functional.expr"_s),
			$of(u"lambda 或方法引用的交叉类型目标错误\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.module-info.name"_s),
			$of(u"错误的类名"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.requires.flag"_s),
			$of(u"错误的请求标记：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.runtime.invisible.param.annotations"_s),
			$of(u"错误的 RuntimeInvisibleParameterAnnotations 属性: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.signature"_s),
			$of(u"错误的签名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.source.file.header"_s),
			$of(u"错误的源文件: {0}\n{1}\n请删除该文件或确保该文件位于正确的源路径子目录中。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.bound.lookup"_s),
			$of(u"在绑定查找中找到意外的静态 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.static.method.in.unbound.lookup"_s),
			$of(u"在未绑定查找中找到意外的静态 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.bad.type.annotation.value"_s),
			$of(u"错误的类型注释目标类型值: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.base.membership"_s),
			$of(u"您的所有基类都属于我们"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical"_s),
			$of(u"规范"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.cant.have.return.statement"_s),
			$of(u"精简构造器不得包含返回语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.contain.explicit.constructor.invocation"_s),
			$of(u"规范构造器不得包含显式构造器调用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.declare.type.variables"_s),
			$of(u"规范构造器不得声明类型变量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.must.not.have.stronger.access"_s),
			$of(u"正在尝试分配更强的访问权限；以前为 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.canonical.with.name.mismatch"_s),
			$of(u"规范构造器中的参数名称无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.access.inner.cls.constr"_s),
			$of(u"无法访问构造器 {0}({1})\n作用域中没有类型为{2}的封闭实例"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.diamond.1"_s),
			$of(u"无法推断{0}的类型参数\n原因: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbol"_s),
			$of(u"无法将 {4} {5}中的 {0} {1}应用到给定类型\n需要: {2}\n找到:    {3}\n原因: {6}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.apply.symbols"_s),
			$of(u"对于{1}({2}), 找不到合适的{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.hide"_s),
			$of(u"{1} 中的 {0} 无法隐藏 {3} 中的 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.implement"_s),
			$of(u"{1}中的{0}无法实现{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.override"_s),
			$of(u"{1}中的{0}无法覆盖{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.args"_s),
			$of(u"找不到符号\n符号: {0} {1}({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args"_s),
			$of(u"找不到符号\n符号:   {0} {1}({3})\n位置: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.location.args.params"_s),
			$of(u"找不到符号\n符号:   {0} <{2}>{1}({3})\n位置: {4}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.cant.resolve.modules"_s),
			$of(u"无法解析模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.captured.type"_s),
			$of("CAP#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.clashes.with"_s),
			$of(u"{1}中的{0}与{3}中的{2}冲突"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.not.found"_s),
			$of(u"找不到{0}的类文件"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.file.wrong.class"_s),
			$of(u"类文件包含错误的类: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.class.is.not.sealed"_s),
			$of(u"必须密封 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.compact"_s),
			$of(u"精简"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.conditional.target.cant.be.void"_s),
			$of(u"条件表达式的目标类型不能为空"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error"_s),
			$of(u"{0} 个错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.plural"_s),
			$of(u"{0} 个错误"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.error.recompile"_s),
			$of(u"仅显示前 {0} 个错误（共 {1} 个）；若要查看更多错误，请使用 -Xmaxerrs"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn"_s),
			$of(u"{0} 个警告"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.plural"_s),
			$of(u"{0} 个警告"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.count.warn.recompile"_s),
			$of(u"仅显示前 {0} 个警告（共 {1} 个）；若要查看更多错误，请使用 -Xmaxwarns"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor"_s),
			$of(u"描述符: {2} {0}({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.descriptor.throws"_s),
			$of(u"描述符: {2} {0}({1}) 抛出{3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond"_s),
			$of("{0}<>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.and.explicit.params"_s),
			$of(u"不能将 \'\'<>\'\' 与构造器的显式类型参数一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.anonymous.methods.implicitly.override"_s),
			$of(u"(由于 <>, 匿名类中声明的每个非私有方法必须覆盖或实现超类型中的方法)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.arg"_s),
			$of(u"此上下文中不允许使用为{1}推断的类型参数{0}\n推断参数在签名属性中无法表达"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.invalid.args"_s),
			$of(u"此上下文中不允许使用为{1}推断的类型参数{0}\n推断参数在签名属性中无法表达"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.diamond.non.generic"_s),
			$of(u"无法将 \'\'<>\'\' 与非泛型类{0}一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.doesnt.extend.sealed"_s),
			$of(u"子类 {0} 必须扩展密封类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.eq.bounds"_s),
			$of(u"等式约束条件：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.exception.message"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.explicit.param.do.not.conform.to.bounds"_s),
			$of(u"显式类型参数{0}不符合声明的范围{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.close"_s),
			$of(u"致命错误: 无法关闭编译器资源"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.ctor"_s),
			$of(u"致命错误: 找不到{0}的构造器"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.field"_s),
			$of(u"致命错误: 找不到字段{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.cant.locate.meth"_s),
			$of(u"致命错误: 找不到方法{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.fatal.err.no.java.lang"_s),
			$of(u"致命错误: 在类路径或引导类路径中找不到程序包 java.lang"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.annotations.after.type.params"_s),
			$of(u"在方法类型参数之后的注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.default.methods"_s),
			$of(u"默认方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond"_s),
			$of(u"diamond 运算符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.diamond.and.anon.class"_s),
			$of(u"\'\'<>\'\' 具有匿名的内部类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.intersection.types.in.cast"_s),
			$of(u"交叉类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.lambda"_s),
			$of(u"lambda 表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.method.references"_s),
			$of(u"方法引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.modules"_s),
			$of(u"模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.multiple.case.labels"_s),
			$of(u"多个 case 标签"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source"_s),
			$of(u"-source {1} 中不支持 {0}\n(请使用 -source {2} 或更高版本以启用 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.not.supported.in.source.plural"_s),
			$of(u"-source {1} 中不支持 {0}\n(请使用 -source {2} 或更高版本以启用 {0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.pattern.matching.instanceof"_s),
			$of(u"instanceof 中的模式匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.private.intf.methods"_s),
			$of(u"私有接口方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.records"_s),
			$of(u"记录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.reifiable.types.instanceof"_s),
			$of(u"instanceof 中的可具体化类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.repeatable.annotations"_s),
			$of(u"重复的注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.sealed.classes"_s),
			$of(u"密封类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.method.invoke"_s),
			$of(u"静态接口方法调用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.static.intf.methods"_s),
			$of(u"静态接口方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.expressions"_s),
			$of(u"switch 表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.switch.rules"_s),
			$of(u"switch 规则"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.text.blocks"_s),
			$of(u"文本块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.type.annotations"_s),
			$of(u"类型注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.in.try.with.resources"_s),
			$of(u"try-with-resources 中的变量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.feature.var.syntax.in.implicit.lambda"_s),
			$of(u"隐式 lambda 中的 var 语法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.module"_s),
			$of(u"文件不包含模块声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.does.not.contain.package"_s),
			$of(u"文件不包含程序包{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.file.doesnt.contain.class"_s),
			$of(u"文件不包含类{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.signature"_s),
			$of(u"类型 {1} 的签名属性非法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.illegal.start.of.class.file"_s),
			$of(u"非法的类文件开始"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.implicit.and.explicit.not.allowed"_s),
			$of(u"不能将隐式类型和显式类型的参数混合使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inaccessible.varargs.type"_s),
			$of(u"形式 varargs 元素类型{0}无法从 {1} {2} 进行访问"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inapplicable.method"_s),
			$of(u"{0} {1}.{2}不适用\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstract.default"_s),
			$of(u"{0} {1}从类型 {4} 和 {5} 中继承了{2}({3}) 的抽象和默认值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.abstracts"_s),
			$of(u"在 {0} {1} 中找到多个非覆盖抽象方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.lambda"_s),
			$of(u"lambda 表达式中的参数类型不兼容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.arg.types.in.mref"_s),
			$of(u"方法引用中的参数类型不兼容"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.bounds"_s),
			$of(u"推论变量 {0} 具有不兼容的上限\n{1}\n{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.descs.in.functional.intf"_s),
			$of(u"在 {0} {1} 中找到不兼容的函数描述符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.diff.ret"_s),
			$of(u"两者都定义了 {0}({1})，但却带有不相关的返回类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.eq.bounds"_s),
			$of(u"推论变量{0}具有不兼容的等式约束条件{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.lambda"_s),
			$of(u"lambda 表达式中的返回类型错误\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.ret.type.in.mref"_s),
			$of(u"方法引用中的返回类型错误\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.conditional"_s),
			$of(u"条件表达式中的类型错误\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.type.in.switch.expression"_s),
			$of(u"switch 表达式中的类型错误\n{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.unrelated.defaults"_s),
			$of(u"{0} {1}从类型 {4} 和 {5} 中继承了{2}({3}) 的不相关默认值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.incompatible.upper.bounds"_s),
			$of(u"推论变量 {0} 具有不兼容的上限 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inconvertible.types"_s),
			$of(u"{0}无法转换为{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.arg.length.mismatch"_s),
			$of(u"无法推断类型变量 {0}\n(实际参数列表和形式参数列表长度不同)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.assignment.exists"_s),
			$of(u"无法推断类型变量 {0}\n(参数不匹配; {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.no.conforming.instance.exists"_s),
			$of(u"不存在类型变量{0}的实例, 以使{1}与{2}一致"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.infer.varargs.argument.mismatch"_s),
			$of(u"无法推断类型变量 {0}\n(varargs 不匹配; {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.eq.bounds"_s),
			$of(u"推断类型不符合等式约束条件\n推断: {0}\n等式约束条件: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.lower.bounds"_s),
			$of(u"推断类型不符合下限\n推断: {0}\n下限: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inferred.do.not.conform.to.upper.bounds"_s),
			$of(u"推断类型不符合上限\n推断: {0}\n上限: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.inner.cls"_s),
			$of(u"内部类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.intersection.type"_s),
			$of("INT#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.default.interface"_s),
			$of(u"在 {0}.{1} 版类文件中找到默认方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.generic.lambda.target"_s),
			$of(u"lambda 表达式的函数描述符无效\n{1} {2} 中的方法 {0} 为泛型方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.mref"_s),
			$of(u"{0}引用无效\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.invalid.static.interface"_s),
			$of(u"在 {0}.{1} 版类文件中找到静态方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.a.type.variable"_s),
			$of(u"不得包含类型变量：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.is.duplicated"_s),
			$of(u"不得包含重复项：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.annotation"_s),
			$of("@interface"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.class"_s),
			$of(u"类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.constructor"_s),
			$of(u"构造器"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.enum"_s),
			$of(u"枚举"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.instance.init"_s),
			$of(u"实例初始化程序"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.interface"_s),
			$of(u"接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.method"_s),
			$of(u"方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.module"_s),
			$of(u"模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.package"_s),
			$of(u"程序包"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record"_s),
			$of(u"记录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.record.component"_s),
			$of(u"记录组件"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static"_s),
			$of(u"静态"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.static.init"_s),
			$of(u"静态初始化程序"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable"_s),
			$of(u"类型变量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.type.variable.bound"_s),
			$of(u"类型变量的限制范围"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.value"_s),
			$of(u"值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.kindname.variable"_s),
			$of(u"变量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lambda"_s),
			$of(u"lambda 表达式"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local"_s),
			$of(u"本地"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.array.missing.target"_s),
			$of(u"数组初始化程序需要显式目标类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.null"_s),
			$of(u"变量初始化程序为 \'\'null\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.cant.infer.void"_s),
			$of(u"变量初始化程序为 \'\'void\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.lambda.missing.target"_s),
			$of(u"lambda 表达式需要显式目标类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.missing.init"_s),
			$of(u"无法在不带初始化程序的变量上使用 \'\'var\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.mref.missing.target"_s),
			$of(u"方法引用需要显式目标类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.local.self.ref"_s),
			$of(u"无法在自引用变量上使用 \'\'var\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location"_s),
			$of("{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.location.1"_s),
			$of(u"类型为{2}的{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_path"_s),
			$of(u"应用程序模块路径"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.module_source_path"_s),
			$of(u"模块源路径"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.system_modules"_s),
			$of(u"系统模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.locn.upgrade_module_path"_s),
			$of(u"升级模块路径"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.lower.bounds"_s),
			$of(u"下限：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.malformed.vararg.method"_s),
			$of(u"类文件包含格式错误的变量元数方法: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.descriptor.invalid"_s),
			$of(u"方法描述符对 {0} 无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.method.must.be.public"_s),
			$of(u"存取方法必须是公共的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.missing.ret.val"_s),
			$of(u"缺少返回值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.definition.expected"_s),
			$of(u"需要 module-info 定义"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.info.invalid.super.class"_s),
			$of(u"带有无效超类的 module-info"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.name.mismatch"_s),
			$of(u"模块名称 {0} 与预期名称 {1} 不匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.module.non.zero.opens"_s),
			$of(u"打开的模块 {0} 具有非零 opens_count"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.mref.infer.and.explicit.params"_s),
			$of(u"不能将原始构造器引用与构造器的显式类型参数一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.same.class"_s),
			$of(u"permits 子句中存在非法自引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.must.not.be.supertype"_s),
			$of(u"对超类型 {0} 的引用非法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.abstracts"_s),
			$of(u"在 {0} {1} 中找不到抽象方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.args"_s),
			$of(u"没有参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.conforming.assignment.exists"_s),
			$of(u"参数不匹配; {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.suitable.functional.intf.inst"_s),
			$of(u"无法推断{0}的函数接口描述符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.maximal.instance.exists"_s),
			$of(u"对于上限为{1}的类型变量{0}, 不存在唯一最大实例"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.no.unique.minimal.instance.exists"_s),
			$of(u"对于下限为{1}的类型变量{0}, 不存在唯一最小实例"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf"_s),
			$of(u"{0} 不是函数接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.a.functional.intf.1"_s),
			$of(u"{0} 不是函数接口\n{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.an.intf.component"_s),
			$of(u"组件类型{0}不是接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.applicable.method.found"_s),
			$of(u"找到第 {0} 个不适用的方法: {1}\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access"_s),
			$of(u"{1}.{0} 是在不可访问的类或接口中定义的"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.class.intf.cant.access.reason"_s),
			$of(u"程序包 {2} 中的 {1}.{0} 不可访问\n({3})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read"_s),
			$of(u"程序包 {1} 已在模块 {2} 中声明, 但模块 {0} 未读取它"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.from.unnamed"_s),
			$of(u"程序包 {0} 已在模块 {1} 中声明, 但该模块不在模块图中"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.does.not.read.unnamed"_s),
			$of(u"程序包 {0} 已在未命名模块中声明，但模块 {1} 未读取它"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported"_s),
			$of(u"程序包 {0} 已在模块 {1} 中声明, 但该模块未导出它"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.from.unnamed"_s),
			$of(u"程序包 {0} 已在模块 {1} 中声明, 但该模块未导出它"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module"_s),
			$of(u"程序包 {0} 已在模块 {1} 中声明, 但该模块未将它导出到模块 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.not.exported.to.module.from.unnamed"_s),
			$of(u"程序包 {0} 已在模块 {1} 中声明, 但该模块未将它导出到未命名模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.access.package.cant.access"_s),
			$of(u"{0} 不可见\n({2})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.not.def.public.cant.access"_s),
			$of(u"{0}在{1}中不是公共的; 无法从外部程序包中对其进行访问"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.overridden.default"_s),
			$of(u"覆盖了{1}中的方法 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.package.not.visible"_s),
			$of(u"程序包 {0} 不可见\n({1})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.partial.inst.sig"_s),
			$of(u"部分实例化为: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.possible.loss.of.precision"_s),
			$of(u"从{0}转换到{1}可能会有损失"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.prob.found.req"_s),
			$of(u"不兼容的类型: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.redundant.supertype"_s),
			$of(u"冗余接口 {0} 已由 {1} 扩展"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.ref.ambiguous"_s),
			$of(u"对{0}的引用不明确\n{3} 中的{1} {2} 和 {6} 中的{4} {5} 都匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.report.access"_s),
			$of(u"{0} 在 {2} 中是 {1} 访问控制"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.resume.abort"_s),
			$of(u"继续(R), 放弃(A)>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.source.unavailable"_s),
			$of(u"(源不可用)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.stat.expr.expected"_s),
			$of(u"lambda 主体与 void 函数接口不兼容\n(请考虑使用块 lambda 主体, 或者改为使用语句表达式)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.static.mref.with.targs"_s),
			$of(u"有关静态方法引用的参数化限定符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.switch.expression.target.cant.be.void"_s),
			$of(u"switch 表达式的目标类型不能为空"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.synthetic.name.conflict"_s),
			$of(u"符号{0}与{1}中的 compiler-synthesized 符号冲突"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.throws.clause.not.allowed.for.canonical.constructor"_s),
			$of(u"对于 {0} 构造器，不允许使用 throws 子句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.bad-symbol"_s),
			$of(u"<错误符号>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.character"_s),
			$of(u"<字符>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.double"_s),
			$of(u"<双精度型>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.end-of-input"_s),
			$of(u"<输入结束>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.float"_s),
			$of(u"<浮点型>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.identifier"_s),
			$of(u"<标识符>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.integer"_s),
			$of(u"<整型>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.long-integer"_s),
			$of(u"<长整型>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.token.string"_s),
			$of(u"<字符串>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.try.not.applicable.to.type"_s),
			$of(u"try-with-resources 不适用于变量类型\n({0})"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof"_s),
			$of(u"capture#{0}, 共 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.captureof.1"_s),
			$of("capture#{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.must.be.identical.to.corresponding.record.component.type"_s),
			$of(u"类型和元数必须与相应记录组件的类型和元数相匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.none"_s),
			$of(u"<无>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.null"_s),
			$of(u"<空值>"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.parameter"_s),
			$of(u"类型参数{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.array.or.iterable"_s),
			$of(u"数组或 java.lang.Iterable"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class"_s),
			$of(u"类"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.class.array"_s),
			$of(u"类或数组"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.exact"_s),
			$of(u"不带限制范围的类或接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.req.ref"_s),
			$of(u"引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.type.var"_s),
			$of("{0}#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unable.to.access.file"_s),
			$of(u"无法访问文件: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.assign"_s),
			$of(u"未经检查的转换"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.cast.to.type"_s),
			$of(u"未经检查的转换"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.clash.with"_s),
			$of(u"{1}中的{0}覆盖了{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.implement"_s),
			$of(u"{1}中的{0}实现了{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unchecked.override"_s),
			$of(u"{1}中的{0}覆盖了{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.undecl.type.var"_s),
			$of(u"未声明的类型变量: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.const.pool.tag.at"_s),
			$of(u"意外的常量池标记：{0}，位于 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unexpected.ret.val"_s),
			$of(u"意外的返回值"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unicode.str.not.supported"_s),
			$of(u"不支持类文件中的 Unicode 字符串"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.module"_s),
			$of(u"未命名模块"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.unnamed.package"_s),
			$of(u"未命名程序包"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.upper.bounds"_s),
			$of(u"下限：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.user.selected.completion.failure"_s),
			$of(u"按类名列出的用户选择输入提示失败"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.explicit.not.allowed"_s),
			$of(u"不能将 \'\'var\'\' 和显式类型的参数混合使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.var.and.implicit.not.allowed"_s),
			$of(u"不能将 \'\'var\'\' 和隐式类型的参数混合使用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.argument.mismatch"_s),
			$of(u"varargs 不匹配; {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.clash.with"_s),
			$of(u"{1}中的{0}覆盖了{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.implement"_s),
			$of(u"{1}中的{0}实现了{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.override"_s),
			$of(u"{1}中的{0}覆盖了{3}中的{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.accessor"_s),
			$of(u"存取方法 {0} 不是 varargs 方法。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.non.varargs.meth"_s),
			$of(u"方法 {0} 不是 varargs 方法。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.reifiable.varargs"_s),
			$of(u"Varargs 元素类型{0}可具体化。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs"_s),
			$of(u"实例方法 {0} 既不是最终的, 也不是私有的。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.varargs.trustme.on.virtual.varargs.final.only"_s),
			$of(u"实例方法 {0} 不是最终的。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.checking.attribution"_s),
			$of(u"[正在检查{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.classpath"_s),
			$of(u"[类文件的搜索路径: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.loading"_s),
			$of(u"[正在加载{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.done"_s),
			$of(u"[语法分析已完成, 用时 {0} 毫秒]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.parsing.started"_s),
			$of(u"[语法分析开始时间 {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.sourcepath"_s),
			$of(u"[源文件的搜索路径: {0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.total"_s),
			$of(u"[共 {0} 毫秒]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.verbose.wrote.file"_s),
			$of(u"[已写入{0}]"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.version.not.available"_s),
			$of(u"(版本信息不可用)"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured"_s),
			$of(u"{0}从{3}的捕获扩展{1} 超 {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.captured.1"_s),
			$of(u"{0}从{3}的捕获扩展{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured"_s),
			$of(u"其中, {0}是新类型变量:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.captured.1"_s),
			$of(u"其中, {0}是新类型变量:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection"_s),
			$of(u"其中, {0}是交叉类型:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.intersection.1"_s),
			$of(u"其中, {0}是交叉类型:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar"_s),
			$of(u"其中, {0}是类型变量:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.description.typevar.1"_s),
			$of(u"其中, {0}是类型变量:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.fresh.typevar"_s),
			$of(u"{0}扩展{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.intersection"_s),
			$of(u"{0}扩展{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar"_s),
			$of(u"{0}扩展已在{2} {3}中声明的{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.where.typevar.1"_s),
			$of(u"{0}已在{2} {3}中声明"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.number.type.args"_s),
			$of(u"类型变量数目错误; 需要{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.wrong.version"_s),
			$of(u"类文件具有错误的版本 {0}.{1}, 应为 {2}.{3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.processor.info"_s),
			$of(u"处理程序{0}与{1}匹配并返回{2}。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.misc.x.print.rounds"_s),
			$of(u"循环 {0}:\n\t输入文件: {1}\n\t注释: {2}\n\t最后一个循环: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.compressed.diags"_s),
			$of(u"某些消息已经过简化; 请使用 -Xdiags:verbose 重新编译以获得完整输出"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deferred.method.inst"_s),
			$of(u"方法 {0} 的延迟实例化\n实例化签名: {1}\n目标类型: {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename"_s),
			$of(u"{0}使用或覆盖了已过时的 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.filename.additional"_s),
			$of(u"{0}还使用或覆盖了已过时的 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural"_s),
			$of(u"某些输入文件使用或覆盖了已过时的 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.plural.additional"_s),
			$of(u"某些输入文件还使用或覆盖了已过时的 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.deprecated.recompile"_s),
			$of(u"有关详细信息, 请使用 -Xlint:deprecation 重新编译。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.lambda.stat"_s),
			$of(u"转换 lambda 表达式\n替代 metafactory = {0}\n合成方法 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat"_s),
			$of(u"转换方法引用\n替代 metafactory = {0}\n"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.mref.stat.1"_s),
			$of(u"转换方法引用\n替代 metafactory = {0}\nbridge 方法 = {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.multiple.elements"_s),
			$of(u"通过 javax.lang.model.util.Elements.{0} 在模块 \'\'{2}\'\' 中找到了多个名为 \'\'{1}\'\' 的元素。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.note"_s),
			$of(u"注: "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename"_s),
			$of(u"{0} 使用预览语言功能。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.filename.additional"_s),
			$of(u"{0} 还使用预览语言功能。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural"_s),
			$of(u"某些输入文件使用预览语言功能。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.plural.additional"_s),
			$of(u"某些输入文件还使用预览语言功能。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.preview.recompile"_s),
			$of(u"有关详细信息，请使用 -Xlint:preview 重新编译。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename"_s),
			$of(u"{0} 使用或覆盖了标记为待删除的已过时 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.filename.additional"_s),
			$of(u"{0} 额外使用或覆盖了标记为待删除的已过时 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural"_s),
			$of(u"某些输入文件使用或覆盖了标记为待删除的已过时 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.plural.additional"_s),
			$of(u"某些输入文件额外使用或覆盖了标记为待删除的已过时 API。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.removal.recompile"_s),
			$of(u"有关详细信息, 请使用 -Xlint:removal 重新编译。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename"_s),
			$of(u"{0}使用了未经检查或不安全的操作。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.filename.additional"_s),
			$of(u"{0}还有未经检查或不安全的操作。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural"_s),
			$of(u"某些输入文件使用了未经检查或不安全的操作。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.plural.additional"_s),
			$of(u"某些输入文件还使用了未经检查或不安全的操作。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.unchecked.recompile"_s),
			$of(u"有关详细信息, 请使用 -Xlint:unchecked 重新编译。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.l2m.deduplicate"_s),
			$of(u"正在对 lambda 函数实现方法 {0} 进行重复数据删除"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi"_s),
			$of(u"将类型 {1} 的方法 {0} 解析为候选项 {2}\n阶段: {3}\n具有实际值: {4}\n具有类型参数: {5}\n候选项:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.note.verbose.resolve.multi.1"_s),
			$of(u"类型 {1} 的方法 {0} 解析错误\n阶段: {3}\n具有实际值: {4}\n具有类型参数: {5}\n候选项:"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.element"_s),
			$of(u"可串行化元素对成员 {0} 的访问可以由不受信任的代码公开执行"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.access.to.member.from.serializable.lambda"_s),
			$of(u"可串行化 lambda 对成员 {0} 的访问可以由不受信任的代码公开执行"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.addopens.ignored"_s),
			$of(u"--add-opens 在编译时没有任何效果"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found"_s),
			$of(u"无法找到类型 \'\'{0}\'\' 的注释方法 \'\'{1}()\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.annotation.method.not.found.reason"_s),
			$of(u"无法找到类型 \'\'{0}\'\' 的注释方法 \'\'{1}()\'\': {2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.attempt.to.synchronize.on.instance.of.value.based.class"_s),
			$of(u"尝试在基于值的类的实例上同步"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.auxiliary.class.accessed.from.outside.of.its.source.file"_s),
			$of(u"{1} 中的辅助类{0}不应从其自身的源文件以外访问"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.bad.name.for.option"_s),
			$of(u"{0} 选项的值中有错误的名称: \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.big.major.version"_s),
			$of(u"{0}: 主版本 {1} 比 {2} 新, 此编译器支持最新的主版本。\n建议升级此编译器。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.constant.SVUID"_s),
			$of(u"serialVersionUID 在类{0}中必须是常量"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.deprecated.annotation.has.no.effect"_s),
			$of(u"@Deprecated 注释对此 {0} 声明没有任何效果"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.diamond.redundant.args"_s),
			$of(u"新表达式中存在冗余类型参数 (改用 diamond 运算符)。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.directory"_s),
			$of(u"错误的路径元素 \"{0}\": 不是目录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.dir.path.element.not.found"_s),
			$of(u"错误的路径元素 \"{0}\": 没有这种目录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.div.zero"_s),
			$of(u"除数为零"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.empty.if"_s),
			$of(u"if 之后没有语句"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.file.from.future"_s),
			$of(u"文件 {0} 的修改日期是未来的日期"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.finally.cannot.complete"_s),
			$of(u"finally 子句无法正常完成"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.forward.ref"_s),
			$of(u"先引用变量 \'\'{0}\'\', 然后再对其初始化"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.future.attr"_s),
			$of(u"{1}.{2} 版类文件中引入的 {0} 属性在 {3}.{4} 版类文件中被忽略"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated"_s),
			$of(u"{1}中的{0}已过时"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal"_s),
			$of(u"{1} 中的 {0} 已过时, 且标记为待删除"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.for.removal.module"_s),
			$of(u"模块 {0} 已过时, 且标记为待删除"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.has.been.deprecated.module"_s),
			$of(u"模块 {0} 已过时"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.char.for.encoding"_s),
			$of(u"编码{0}的不可映射字符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.illegal.ref.to.restricted.type"_s),
			$of(u"对受限制类型 \'\'{0}\'\' 的引用非法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.improper.SVUID"_s),
			$of(u"必须在类{0}中将 serialVersionUID 声明为 static final"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inconsistent.white.space.indentation"_s),
			$of(u"空格缩进不一致"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.incubating.modules"_s),
			$of(u"使用 incubating 模块: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.inexact.non-varargs.call"_s),
			$of(u"最后一个参数使用了不准确的变量类型的 varargs 方法的非 varargs 调用; \n对于 varargs 调用, 应使用 {0}\n对于非 varargs 调用, 应使用 {1}, 这样也可以抑制此警告"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.archive.file"_s),
			$of(u"以下路径中存在意外的文件: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.path"_s),
			$of(u"无效文件名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.invalid.yield"_s),
			$of(u"\'\'yield\'\' 在未来发行版中可能会成为受限标识符\n（要调用称为 yield 的方法，请通过接收方或类型名称限定 yield）"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.is.preview"_s),
			$of(u"{0} 是某预览功能中的一个 API"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible"_s),
			$of(u"模块 {2} 中的 {0} {1} 对需要该模块的客户机不可访问"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.not.required.transitive"_s),
			$of(u"未使用 \'\'requires transitive\'\' 间接导出模块 {2} 中的 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported"_s),
			$of(u"未导出模块 {2} 中的 {0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.leaks.not.accessible.unexported.qualified"_s),
			$of(u"模块 {2} 中的 {0} {1} 可能对需要该模块的所有客户机都不可见"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.lintOption"_s),
			$of("[{0}] "_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.local.redundant.type"_s),
			$of(u"本地变量的冗余类型 (使用 \'\'var\'\' 替换显式类型)。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.locn.unknown.file.on.module.path"_s),
			$of(u"模块路径中的未知文件: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.long.SVUID"_s),
			$of(u"serialVersionUID 在类{0}中必须是 long 类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.method.redundant.typeargs"_s),
			$of(u"方法调用中存在冗余类型参数。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing-explicit-ctor"_s),
			$of(u"导出的程序包 {1} 中的类 {0} 未声明显式构造器，因此将向模块 {2} 的客户机公开默认构造器"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.SVUID"_s),
			$of(u"可序列化类{0}没有 serialVersionUID 的定义"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.missing.deprecated.annotation"_s),
			$of(u"未使用 @Deprecated 对已过时的项目进行注释"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.for.option.not.found"_s),
			$of(u"找不到 {0} 选项中的模块名称: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.module.not.found"_s),
			$of(u"找不到模块: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.source"_s),
			$of(u"源值{0}已过时, 将在未来所有发行版中删除"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.suppression"_s),
			$of(u"要隐藏有关已过时选项的警告, 请使用 -Xlint:-options。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.obsolete.target"_s),
			$of(u"目标值{0}已过时, 将在未来所有发行版中删除"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.option.parameters.unsupported"_s),
			$of(u"目标值 {0} 不支持 -parameters。请使用 {1} 或更高版本。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.outdir.is.in.exploded.module"_s),
			$of(u"输出目录位于展开的模块中: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.bridge"_s),
			$of(u"{0}; 被覆盖的方法为 bridge 方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.equals.but.not.hashcode"_s),
			$of(u"类{0}覆盖了 equals, 但该类或任何超类都未覆盖 hashCode 方法"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.ret"_s),
			$of(u"{0}\n返回类型需要从{1}到{2}的未经检查的转换"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.unchecked.thrown"_s),
			$of(u"{0}\n被覆盖的方法未抛出{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.extra"_s),
			$of(u"{0}; 覆盖的方法缺少 \'\'...\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.override.varargs.missing"_s),
			$of(u"{0}; 被覆盖的方法没有 \'\'...\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.package.empty.or.not.found"_s),
			$of(u"程序包为空或不存在: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.path.element.not.found"_s),
			$of(u"错误的路径元素 \"{0}\": 没有这种文件或目录"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.pkg-info.already.seen"_s),
			$of(u"已找到程序包{0}的 package-info.java 文件"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.poor.choice.for.module.name"_s),
			$of(u"模块名称组成部分 {0} 应避免以数字结尾"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.position.overflow"_s),
			$of(u"行 {0} 处的位置编码溢出"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.possible.fall-through.into.case"_s),
			$of(u"可能无法实现 case"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potential.lambda.found"_s),
			$of(u"可将此匿名内部类创建转换为 lambda 表达式。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.potentially.ambiguous.overload"_s),
			$of(u"{1} 中的 {0} 可能与 {3} 中的 {2} 混淆"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use"_s),
			$of(u"{0} 是预览功能，可能会在未来发行版中删除。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.classfile"_s),
			$of(u"{0} 的类文件使用 Java SE {1} 的预览功能。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.preview.feature.use.plural"_s),
			$of(u"{0} 是预览功能，可能会在未来发行版中删除。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.prob.found.req"_s),
			$of(u"{0}\n需要: {2}\n找到:    {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.annotations.without.processors"_s),
			$of(u"没有处理程序要使用以下任何注释: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.option.name"_s),
			$of(u"注释处理程序 \'\'{1}\'\' 返回重复的支持的选项 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.duplicate.supported.annotation"_s),
			$of(u"注释处理程序 \'\'{1}\'\' 返回重复的支持的注释类型 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.create.last.round"_s),
			$of(u"将不对在最后一个循环中创建的类型为 \'\'{0}\'\' 的文件进行注释处理。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.file.reopening"_s),
			$of(u"尝试多次为 \'\'{0}\'\' 创建文件"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.illegal.file.name"_s),
			$of(u"无法创建带有非法名称 \'\'{0}\'\' 的文件。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.malformed.supported.string"_s),
			$of(u"处理程序 \'\'{1}\'\' 为支持的注释类型返回格式错误的字符串 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.messager"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.package.does.not.exist"_s),
			$of(u"程序包{0}不存在"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.proc-only.requested.no.procs"_s),
			$of(u"在未请求编译的情况下进行注释处理, 但找不到处理程序。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.processor.incompatible.source.version"_s),
			$of(u"来自注释处理程序 \'\'{1}\'\' 的受支持 source 版本 \'\'{0}\'\' 低于 -source \'\'{2}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.redundant.types.with.wildcard"_s),
			$of(u"注释处理程序 \'\'{0}\'\' 重复支持 \'\'*\'\' 和其他注释类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.suspicious.class.name"_s),
			$of(u"正在为名称以{1}结尾的类型创建文件: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.already.exists"_s),
			$of(u"类型 \'\'{0}\'\' 的文件已经存在于源路径或类路径中"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.type.recreate"_s),
			$of(u"尝试多次创建类型 \'\'{0}\'\' 的文件"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unclosed.type.files"_s),
			$of(u"类型 \'\'{0}\'\' 的文件未关闭; 将不针对这些类型进行注释处理"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.unmatched.processor.options"_s),
			$of(u"以下选项未被任何处理程序识别: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.implicit"_s),
			$of(u"注释处理不适用于隐式编译的文件。\n使用 -implicit 指定用于隐式编译的策略。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.proc.use.proc.or.implicit"_s),
			$of(u"注释处理不适用于隐式编译的文件。\n使用 -proc:none 禁用注释处理或使用 -implicit 指定用于隐式编译的策略。"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.profile.target.conflict"_s),
			$of(u"配置文件{0}对于目标发行版 {1} 无效"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.raw.class.use"_s),
			$of(u"找到原始类型: {0}\n缺少泛型类{1}的类型参数"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.redundant.cast"_s),
			$of(u"出现冗余的到{0}的转换"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.automatic"_s),
			$of(u"需要自动模块的指令"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.requires.transitive.automatic"_s),
			$of(u"需要自动模块的过渡指令"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed"_s),
			$of(u"从发行版 {1} 开始，\'\'{0}\'\' 是受限类型名称，不能用于类型声明，也不能用作数组的元素类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.restricted.type.not.allowed.preview"_s),
			$of(u"\'\'{0}\'\' 在未来发行版中可能会成为受限类型名称，可能无法用于类型声明，也不能用作数组的元素类型"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.self.ref"_s),
			$of(u"变量 \'\'{0}\'\' 的初始化程序中存在自引用"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.service.provided.but.not.exported.or.used"_s),
			$of(u"已提供服务接口, 但未导出或使用服务接口"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.bootclasspath"_s),
			$of(u"未与 -source {0} 一起设置引导类路径"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.no.system.modules.path"_s),
			$of(u"未与 -source {0} 一起设置系统模块路径"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.source.target.conflict"_s),
			$of(u"源发行版 {0} 需要目标发行版 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.static.not.qualified.by.type"_s),
			$of(u"static {0}应由类型名称{1}而不是表达式限定"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.sun.proprietary"_s),
			$of(u"{0}是内部专用 API, 可能会在未来发行版中删除"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.target.default.source.conflict"_s),
			$of(u"目标发行版 {0} 与默认的源发行版 {1} 冲突"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.trailing.white.space.will.be.removed"_s),
			$of(u"将删除尾随空格"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.explicit.close.call"_s),
			$of(u"在可自动结束的资源上显式调用 close()"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.not.referenced"_s),
			$of(u"不能在相应的 try 语句的正文中引用可自动结束的资源{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.try.resource.throws.interrupted.exc"_s),
			$of(u"可自动关闭的资源{0}包含的成员方法 close() 可能抛出 InterruptedException"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign"_s),
			$of(u"未经检查的分配: 将{0}分配给{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.assign.to.var"_s),
			$of(u"对作为原始类型{1}的成员的变量{0}的分配未经过检查"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.call.mbr.of.raw.type"_s),
			$of(u"对作为原始类型{1}的成员的{0}的调用未经过检查"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.cast.to.type"_s),
			$of(u"向类型{0}的转换未经过检查"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.generic.array.creation"_s),
			$of(u"对于类型为{0}的 varargs 参数, 泛型数组创建未经过检查"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.meth.invocation.applied"_s),
			$of(u"方法调用未经过检查: 将{4} {5}中的{0} {1}应用到给定的类型\n需要: {2}\n找到:    {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unchecked.varargs.non.reifiable.type"_s),
			$of(u"参数化 vararg 类型{0}的堆可能已受污染"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.underscore.as.identifier"_s),
			$of(u"从发行版 9 开始, \'\'_\'\' 为关键字, 不能用作标识符"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unexpected.archive.file"_s),
			$of(u"以下档案文件存在意外的扩展名: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant"_s),
			$of(u"未知的枚举常量 {1}.{2}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unknown.enum.constant.reason"_s),
			$of(u"未知的枚举常量 {1}.{2}\n原因: {3}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch"_s),
			$of(u"catch 子句无法访问\n已捕获到抛出的类型{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.unreachable.catch.1"_s),
			$of(u"catch 子句无法访问\n已捕获到抛出的类型{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.redundant.trustme.anno"_s),
			$of(u"冗余的 {0} 注释。{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.varargs.unsafe.use.varargs.param"_s),
			$of(u"Varargs 方法可能导致来自不可具体化 varargs 参数 {0} 的堆污染"_s)
		}),
		$$new($ObjectArray, {
			$of("compiler.warn.warning"_s),
			$of(u"警告: "_s)
		})
	});
}

compiler_zh_CN::compiler_zh_CN() {
}

$Class* compiler_zh_CN::load$($String* name, bool initialize) {
	$loadClass(compiler_zh_CN, name, initialize, &_compiler_zh_CN_ClassInfo_, allocate$compiler_zh_CN);
	return class$;
}

$Class* compiler_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com