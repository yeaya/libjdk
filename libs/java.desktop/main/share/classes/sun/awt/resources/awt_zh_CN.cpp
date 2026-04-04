#include <sun/awt/resources/awt_zh_CN.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			u"输入窗口"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			u"十字光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			u"默认光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			u"默认拖动光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			u"默认放置光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			u"默认无拖动光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			u"“向东调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			u"手型光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			u"系统输入法"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"基于文本的操作可能不能正常运行, 因为系统上安装了一套不一致的动态链接库 (DLL)。有关此问题的详细信息和建议的解决方案, 请参阅 java.sun.com 网站上的 Java(TM) 2 SDK, 标准版发行说明。"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			u"无法创建{0}。原因: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			u"日文"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			u"朝鲜文"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			u"中文"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			u"简体中文"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			u"繁体中文"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"选择输入窗口"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			u"小于号"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			u"移动光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			u"“向东北方向调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			u"“向北调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			u"“向西北方向调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			u"“向东南方向调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			u"“向南调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			u"“向西南方向调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			u"文本光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			u"“向西调整大小”光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			u"沙漏光标"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			u"接受"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NumPad +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			u"重新"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			u"所有候选项"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			u"字母数字"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			"Alt"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			"Alt Graph"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			u"& 符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			u"星号"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			u"@ 符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			u"后引号"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			u"反斜杠"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Backspace"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			u"开始"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			u"左花括号"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			u"右花括号"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Cancel"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Caps Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			u"抑扬符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Clear"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			u"右方括号"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			u"代码输入"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			u"冒号"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			u"逗号"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			u"编写"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			u"上下文菜单"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			u"转换"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			u"复制"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			u"剪切"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			u"上标点"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			u"上标圆圈"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			u"带尖音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			u"短音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			u"倒置音调符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			u"变音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			u"带抑扬符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			u"分音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			u"双尖音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			u"抑音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			u"阿尔塔符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			u"长音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			u"反尾形符"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			u"半浊音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			u"腭化符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			u"浊音符号"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			"NumPad ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Delete"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			"NumPad /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			u"美元"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			u"向下箭头"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"End"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Enter"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			u"等号"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"Esc"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			u"欧元"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			u"感叹号"_s
		}),
		$$new($ObjectArray, {
			"AWT.f1"_s,
			"F1"_s
		}),
		$$new($ObjectArray, {
			"AWT.f10"_s,
			"F10"_s
		}),
		$$new($ObjectArray, {
			"AWT.f11"_s,
			"F11"_s
		}),
		$$new($ObjectArray, {
			"AWT.f12"_s,
			"F12"_s
		}),
		$$new($ObjectArray, {
			"AWT.f13"_s,
			"F13"_s
		}),
		$$new($ObjectArray, {
			"AWT.f14"_s,
			"F14"_s
		}),
		$$new($ObjectArray, {
			"AWT.f15"_s,
			"F15"_s
		}),
		$$new($ObjectArray, {
			"AWT.f16"_s,
			"F16"_s
		}),
		$$new($ObjectArray, {
			"AWT.f17"_s,
			"F17"_s
		}),
		$$new($ObjectArray, {
			"AWT.f18"_s,
			"F18"_s
		}),
		$$new($ObjectArray, {
			"AWT.f19"_s,
			"F19"_s
		}),
		$$new($ObjectArray, {
			"AWT.f2"_s,
			"F2"_s
		}),
		$$new($ObjectArray, {
			"AWT.f20"_s,
			"F20"_s
		}),
		$$new($ObjectArray, {
			"AWT.f21"_s,
			"F21"_s
		}),
		$$new($ObjectArray, {
			"AWT.f22"_s,
			"F22"_s
		}),
		$$new($ObjectArray, {
			"AWT.f23"_s,
			"F23"_s
		}),
		$$new($ObjectArray, {
			"AWT.f24"_s,
			"F24"_s
		}),
		$$new($ObjectArray, {
			"AWT.f3"_s,
			"F3"_s
		}),
		$$new($ObjectArray, {
			"AWT.f4"_s,
			"F4"_s
		}),
		$$new($ObjectArray, {
			"AWT.f5"_s,
			"F5"_s
		}),
		$$new($ObjectArray, {
			"AWT.f6"_s,
			"F6"_s
		}),
		$$new($ObjectArray, {
			"AWT.f7"_s,
			"F7"_s
		}),
		$$new($ObjectArray, {
			"AWT.f8"_s,
			"F8"_s
		}),
		$$new($ObjectArray, {
			"AWT.f9"_s,
			"F9"_s
		}),
		$$new($ObjectArray, {
			"AWT.final"_s,
			u"最终"_s
		}),
		$$new($ObjectArray, {
			"AWT.find"_s,
			u"查找"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			u"全角"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			u"大于号"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			u"半角"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			u"帮助"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			u"平假名"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Home"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"打开/关闭输入方法"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Insert"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			u"倒置感叹号"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			u"日语平假名"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			u"日语片假名"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			u"日语罗马字符"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			u"假名"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			"Kana Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanji"_s,
			u"日本汉字"_s
		}),
		$$new($ObjectArray, {
			"AWT.katakana"_s,
			u"片假名"_s
		}),
		$$new($ObjectArray, {
			"AWT.left"_s,
			u"向左箭头"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			u"左括号"_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			"Meta"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			u"减号"_s
		}),
		$$new($ObjectArray, {
			"AWT.modechange"_s,
			u"模式更改"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NumPad *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			u"不转换"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Num Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			u"井号"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			"NumPad"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			u"左方括号"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			u"粘贴"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Pause"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			u"句点"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			"Page Down"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			"Page Up"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			u"加号"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			u"上一个候选项"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Print Screen"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			u"小道具"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			u"引号"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			u"双引号"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			u"向右箭头"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			u"右括号"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			u"罗马字符"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Scroll Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			u"分号"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			"NumPad ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			"NumPad ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			"Shift"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			u"斜杠"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			u"空格"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			u"停止"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			"NumPad -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tab"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			u"未定义"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			u"下划线"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			u"撤消"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			u"未知"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			u"向上箭头"_s
		}),
		$$new($ObjectArray, {
			"AWT.windows"_s,
			"Windows"_s
		}),
		$$new($ObjectArray, {
			"java.awt.def.delay"_s,
			"30"_s
		}),
		$$new($ObjectArray, {
			"java.awt.im.style"_s,
			"on-the-spot"_s
		})
	});
}

awt_zh_CN::awt_zh_CN() {
}

$Class* awt_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_zh_CN);
	});
	return class$;
}

$Class* awt_zh_CN::class$ = nullptr;

		} // resources
	} // awt
} // sun