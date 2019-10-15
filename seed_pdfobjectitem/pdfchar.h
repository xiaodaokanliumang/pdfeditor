#ifndef PDFCHAR_H
#define PDFCHAR_H

#ifndef IPDFCHAR_H
#include "seed_pdfobject/ipdfchar.h"
#endif /*IPDFCHAR_H*/

#include "QtWidgets/QWidget"

BEGIN_DOX_NAMESPACE

class PDFChar
	: public IPDFChar
	, public QWidget
{
	REGISTER_ACTUALIZE(PDFChar, IPDFChar)

public:

	/* @�ӿ� Ĭ�Ϲ��캯��
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	PDFChar();

	/* @�ӿ� Ĭ����������
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	~PDFChar();

	/* @�ӿ�
	 * @����
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual bool textSize(int);

	/* @�ӿ�
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual int textSize() const;

	/* @�ӿ�
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual QColor color() const;

	/* @�ӿ�
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual QColor textColor() const;

	/* @�ӿ�
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual QString textFont() const;

	/* @�ӿ�
	 * @����
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual bool color(const QColor &);

	/* @�ӿ�
	 * @����
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual bool textFont(const QString &);

	/* @�ӿ�
	 * @����
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual bool textColor(const QColor &);

};

END_DOX_NAMESPACE

#endif /*PDFCHAR_H*/