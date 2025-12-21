#include <com/sun/tools/javac/resources/javac_zh_CN.h>

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

$MethodInfo _javac_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(javac_zh_CN::*)()>(&javac_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _javac_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.javac_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_javac_zh_CN_MethodInfo_
};

$Object* allocate$javac_zh_CN($Class* clazz) {
	return $of($alloc(javac_zh_CN));
}

void javac_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("javac.fullVersion"_s),
			$of(u"{0}完整版本 \"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.bug"_s),
			$of(u"编译器 ({0}) 中出现异常错误。如果在 Bug Database (http://bugs.java.com) 中没有找到该错误，请通过 Java Bug 报告页 (http://bugreport.java.com) 建立该 Java 编译器 Bug。请在报告中附上您的程序、以下诊断信息以及传递到 Java 编译器的参数。谢谢。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.io"_s),
			$of(u"\n\n发生输入/输出错误。\n有关详细信息, 请参阅以下堆栈跟踪。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output"_s),
			$of(u"正在将 javac 参数打印到：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output.error"_s),
			$of(u"尝试将 javac 参数打印到 {0} 时出错，参数将采用："_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.plugin.uncaught.exception"_s),
			$of(u"\n\n插件抛出未捕获的异常错误。\n有关详细信息, 请参阅以下堆栈跟踪。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.proc.annotation.uncaught.exception"_s),
			$of(u"\n\n注释处理程序抛出未捕获的异常错误。\n有关详细信息, 请参阅以下堆栈跟踪。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.resource"_s),
			$of(u"\n\n系统资源不足。\n有关详细信息, 请参阅以下堆栈跟踪。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage"_s),
			$of(u"用法: {0} <选项> <源文件>\n使用 --help 可列出可能的选项"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.header"_s),
			$of(u"用法: {0} <options> <source files>\n其中, 可能的选项包括:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.nonstandard.footer"_s),
			$of(u"这些额外选项如有更改, 恕不另行通知。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.A"_s),
			$of(u"传递给注释处理程序的选项"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.AT"_s),
			$of(u"从文件读取选项和文件名"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.J"_s),
			$of(u"直接将 <标记> 传递给运行时系统"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Werror"_s),
			$of(u"出现警告时终止编译"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.X"_s),
			$of(u"输出额外选项的帮助"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.a"_s),
			$of(u"置于引导类路径之后"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.p"_s),
			$of(u"置于引导类路径之前"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint"_s),
			$of(u"为 javadoc 注释中的问题启用建议的检查"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.custom"_s),
			$of(u"为 javadoc 注释中的问题启用或禁用特定检查,\n        其中 <group> 为 accessibility, html, missing, reference 或 syntax 之一。\n        <access> 为 public, protected, package 或 private 之一。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.args"_s),
			$of(u"[-]<程序包>(,[-]<程序包>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.desc"_s),
			$of(u"在特定的程序包中启用或禁用检查。每个 <程序包> 是\n程序包的限定名称, 或程序包名称前缀后跟 \'.*\', \n它扩展到给定程序包的所有子程序包。在每个 <程序包>\n前面加上 \'-\' 可以为指定程序包禁用检查。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.subopts"_s),
			$of("(all|none|[-]<group>)[/<access>]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint"_s),
			$of(u"启用建议的警告"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.all"_s),
			$of(u"启用所有警告"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.custom"_s),
			$of(u"要启用或禁用的警告, 使用逗号分隔。\n        在关键字前面加上 \'-\' 可禁用指定的警告。\n        支持的关键字包括:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.auxiliaryclass"_s),
			$of(u"有关辅助类在源文件中隐藏, 但在其他文件中使用的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.cast"_s),
			$of(u"有关使用了不必要转换的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.classfile"_s),
			$of(u"有关与类文件内容相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.dep-ann"_s),
			$of(u"有关项在 JavaDoc 中标记为已过时但未使用 @Deprecated 注释的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.deprecation"_s),
			$of(u"有关使用了已过时项的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.divzero"_s),
			$of(u"有关除以常量整数 0 的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.empty"_s),
			$of(u"有关 if 之后没有语句的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.exports"_s),
			$of(u"有关与模块导出相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.fallthrough"_s),
			$of(u"有关从 switch 语句的一个 case 向下顺序执行到下一个 case 的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.finally"_s),
			$of(u"有关 finally 子句未正常终止的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.missing-explicit-ctor"_s),
			$of(u"有关导出的程序包中的公共和受保护类中缺少显式构造器的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.module"_s),
			$of(u"有关模块系统相关问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.opens"_s),
			$of(u"有关与模块打开相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.options"_s),
			$of(u"有关与使用命令行选项相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overloads"_s),
			$of(u"有关与方法重载相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overrides"_s),
			$of(u"有关与方法覆盖相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.path"_s),
			$of(u"有关命令行上的路径元素无效的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.preview"_s),
			$of(u"有关使用预览语言功能的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.processing"_s),
			$of(u"有关与注释处理相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.rawtypes"_s),
			$of(u"有关使用了原始类型的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.removal"_s),
			$of(u"有关使用了标记为待删除的 API 的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-automatic"_s),
			$of(u"有关在 requires 子句中使用自动模块的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-transitive-automatic"_s),
			$of(u"有关 requires 过渡中的自动模块的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.serial"_s),
			$of(u"有关未提供序列版本 ID 的可序列化类的警告。\n                             此外还警告有关可串行化元素对非公共成员的访问。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.static"_s),
			$of(u"有关使用实例来访问静态成员的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.synchronization"_s),
			$of(u"有关尝试在基于值的类的实例上同步的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.text-blocks"_s),
			$of(u"有关文本块缩进中的空格字符不一致的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.try"_s),
			$of(u"有关与使用 try 块 (例如 try-with-resources) 相关的问题的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.unchecked"_s),
			$of(u"有关未检查操作的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.varargs"_s),
			$of(u"有关潜在不安全的 vararg 方法的警告。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.none"_s),
			$of(u"禁用所有警告"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xstdout"_s),
			$of(u"重定向标准输出"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addExports"_s),
			$of(u"指定被视为已从其定义模块导出到其他模块或者导出到所有\n        未命名模块 (如果 <other-module> 为 ALL-UNNAMED) 的程序包。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addReads"_s),
			$of(u"指定被视为给定模块需要的其他模块。\n<other-module> 可能需要为 ALL-UNNAMED, 以便要求未命名模块。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addmods"_s),
			$of(u"除了初始模块之外要解析的根模块; 如果 <module>\n        为 ALL-MODULE-PATH, 则为模块路径中的所有模块。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.Xlint"_s),
			$of(u"<密钥>(,<密钥>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addExports"_s),
			$of(u"<模块>/<程序包>=<其他模块>(,<其他模块>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addReads"_s),
			$of(u"<模块>=<其他模块>(,<其他模块>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addmods"_s),
			$of(u"<模块>(,<模块>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.class"_s),
			$of("<class>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.class.list"_s),
			$of("<class1>[,<class2>,<class3>...]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.default.module.for.created.files"_s),
			$of("<module-name>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.directory"_s),
			$of("<directory>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.dirs"_s),
			$of("<dirs>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.encoding"_s),
			$of("<encoding>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.file"_s),
			$of("<filename>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.flag"_s),
			$of("<flag>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.jdk"_s),
			$of("<jdk>|none"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.key.equals.value"_s),
			$of("key[=value]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.limitmods"_s),
			$of(u"<模块>(,<模块>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.m"_s),
			$of(u"<模块>(,<模块>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.module.version"_s),
			$of(u"<版本>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.mspath"_s),
			$of("<module-source-path>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.multi-release"_s),
			$of("<release>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.number"_s),
			$of("<number>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.patch"_s),
			$of(u"<模块>=<文件>(:<文件>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.path"_s),
			$of("<path>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.pathname"_s),
			$of("<pathname>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.plugin"_s),
			$of(u"\"名称参数\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.profile"_s),
			$of("<profile>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.release"_s),
			$of("<release>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.bootclasspath"_s),
			$of(u"覆盖引导类文件的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.classpath"_s),
			$of(u"指定查找用户类文件和注释处理程序的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.d"_s),
			$of(u"指定放置生成的类文件的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.default.module.for.created.files"_s),
			$of(u"由注释处理程序创建的文件的备用目标模块 (如果未指定或推断任何模块)。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.deprecation"_s),
			$of(u"输出使用已过时的 API 的源位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.diags"_s),
			$of(u"选择诊断模式"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.doclint.format"_s),
			$of(u"指定文档注释的格式"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.encoding"_s),
			$of(u"指定源文件使用的字符编码"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.endorseddirs"_s),
			$of(u"覆盖签名的标准路径的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.extdirs"_s),
			$of(u"覆盖所安装扩展的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g"_s),
			$of(u"生成所有调试信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.lines.vars.source"_s),
			$of(u"只生成某些调试信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.none"_s),
			$of(u"不生成任何调试信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.headerDest"_s),
			$of(u"指定放置生成的本机标头文件的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help"_s),
			$of(u"输出此帮助消息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.implicit"_s),
			$of(u"指定是否为隐式引用文件生成类文件"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.inherit_runtime_environment"_s),
			$of(u"从运行时环境继承模块系统配置选项。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.limitmods"_s),
			$of(u"限制可观察模块的领域"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.m"_s),
			$of(u"只编译指定的模块，请检查时间戳"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxerrs"_s),
			$of(u"设置要输出的错误的最大数目"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxwarns"_s),
			$of(u"设置要输出的警告的最大数目"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.module.version"_s),
			$of(u"指定正在编译的模块版本"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulepath"_s),
			$of(u"指定查找应用程序模块的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulesourcepath"_s),
			$of(u"指定查找多个模块的输入源文件的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.moreinfo"_s),
			$of(u"输出类型变量的扩展信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.multi-release"_s),
			$of(u"指定在多发行版 jar 中使用哪个发行版"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nogj"_s),
			$of(u"语言中不接受泛型"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nowarn"_s),
			$of(u"不生成任何警告"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.parameters"_s),
			$of(u"生成元数据以用于方法参数的反射"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.patch"_s),
			$of(u"使用 JAR 文件或目录中的类和资源覆盖\n        或增强模块"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.pkginfo"_s),
			$of(u"指定 package-info 文件的处理"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.plugin"_s),
			$of(u"要运行的插件的名称和可选参数"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prefer"_s),
			$of(u"指定读取文件, 当同时找到隐式编译类的源文件和类文件时"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.preview"_s),
			$of(u"启用预览语言功能。要与 -source 或 --release 一起使用。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.print"_s),
			$of(u"输出指定类型的文本表示"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printProcessorInfo"_s),
			$of(u"输出有关请求处理程序处理哪些注释的信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printRounds"_s),
			$of(u"输出有关注释处理循环的信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printsearch"_s),
			$of(u"输出有关搜索类文件的位置的信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.proc.none.only"_s),
			$of(u"控制是否执行注释处理和/或编译。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processor"_s),
			$of(u"要运行的注释处理程序的名称; 绕过默认的搜索进程"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processormodulepath"_s),
			$of(u"指定查找注释处理程序的模块路径"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processorpath"_s),
			$of(u"指定查找注释处理程序的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.profile"_s),
			$of(u"请确保使用的 API 在指定的配置文件中可用"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prompt"_s),
			$of(u"在每次出错后停止"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.release"_s),
			$of(u"为指定的 Java SE 发行版编译。支持的发行版：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.s"_s),
			$of(u"发出 java 源而不是类文件"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.source"_s),
			$of(u"提供与指定的 Java SE 发行版的源兼容性。支持的发行版：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourceDest"_s),
			$of(u"指定放置生成的源文件的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourcepath"_s),
			$of(u"指定查找输入源文件的位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.system"_s),
			$of(u"覆盖系统模块位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.target"_s),
			$of(u"生成适合指定的 Java SE 发行版的类文件。支持的发行版：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.upgrademodulepath"_s),
			$of(u"覆盖可升级模块位置"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.userpathsfirst"_s),
			$of(u"在引导类路径之前而不是之后搜索类的类路径和源路径"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.verbose"_s),
			$of(u"输出有关编译器正在执行的操作的消息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.version"_s),
			$of(u"版本信息"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.version"_s),
			$of("{0} {1}"_s)
		})
	});
}

javac_zh_CN::javac_zh_CN() {
}

$Class* javac_zh_CN::load$($String* name, bool initialize) {
	$loadClass(javac_zh_CN, name, initialize, &_javac_zh_CN_ClassInfo_, allocate$javac_zh_CN);
	return class$;
}

$Class* javac_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com