
/*! \file UIVerticalLayout.h
	\brief ����ļ����������򲼾ֵ����һЩ�������亯��
	\author duilib
	\date 12:10:2013   16:00
	\copyright GNU Public License
	\version 1.0
*/

#ifndef __UIVERTICALLAYOUT_H__
#define __UIVERTICALLAYOUT_H__

/*! \class CVerticalLayoutUI
    \brief �������Ҫ��װ�����򲼾ֵ�һ�����ܵ�ʵ��
*/

class CUIVerticalLayout : public CUIContainer
{
public:
	CUIVerticalLayout();

	/** \fn CUIString GetClass() const
	    \brief ��ȡ���������
	    \return ����
	*/

	CUIString GetClass() const;

	/** \fn LPVOID GetInterface(const CUIString& strName)
	    \brief ͨ�����ƻ�ȡ�ӿ�
		\param [in] strName �ӿ�����
	    \return �ӿڵ�ָ��
	*/

	LPVOID GetInterface(const CUIString& strName);

	/** \fn UINT GetControlFlags() const
	    \brief ��ȡ���Ʊ�ʶ
	    \return ����Ŀ��Ʒ�
	*/

	UINT GetControlFlags() const;

	/** \fn void SetSepHeight(int iHeight)
		\param [in] iHeight �ָ�������
	    \brief �ָ�������,������ʾ�ָ�������߻����ұ�,��(-4)
	*/

	void SetSepHeight(int iHeight);

	/** \fn int GetSepHeight() const
	    \brief ��ȡ�ָ�������
	    \return �ָ�����
		\see SetSepWidth()
	*/

	int GetSepHeight() const;

	/** \fn void SetSepImmMode(bool bImmediately)
		\param [in] bImmediately �Ƿ�����
	    \brief �����϶��ָ����Ƿ������ı��С,��(false)
	*/

	void SetSepImmMode(bool bImmediately);

	/** \fn bool IsSepImmMode() const
	    \brief �Ƿ��������϶��ָ��������ı��С������
	    \return true �Ѿ����� false û������
		\see SetSepImmMode()
	*/

	bool IsSepImmMode() const;

	/** \fn void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue)
	    \brief ���ô˿ؼ�������
		\param [in] pstrName ��������
		\param [in] pstrValue ����ֵ
	*/

	void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue);

	/** \fn void DoEvent(TEventUI& event)
	    \brief ��Ӧ�¼�����
		\param [in,out] event �¼�������
	*/

	void DoEvent(TEventUI& event);

	/** \fn void SetPos(RECT rc)
	    \brief ���ÿؼ��µ�λ��
		\param [in] rc �µ�λ�ýṹ
		\note ����������ڴ��ڴ�С�ı�ʱ�������������������Ӳ��ֿؼ���float��������Ϊ
		      false�Ļ���������Զ�λ��������������¼����Ӳ��ֵĴ�С��Ȼ����Ӳ��ֽ���
			  SetPos���Ӷ������������ֵĴ�С��
	*/

	void SetPos(const CUIRect& rc);

	/** \fn void DoPostPaint(HDC hDC, const RECT& rcPaint)
	    \brief ��������������Ʒָ����ı���
		\param hDC ��ˢ���
		\param rcPaint �������û���õ�
		\note ֻ����sepimm���ó���false���϶��Ż���ַָ�����
	*/

	void DoPostPaint(cairo_t *cr, const CUIRect& rcPaint);

	/** \fn RECT GetThumbRect(bool bUseNew = false) const
	    \brief �������ʱ��ȡ�ָ�����RECT.
		\param [in] bUseNew �Ƿ�ʹ����λ�� 
	    \return �ָ�����RECT
	*/

	CUIRect GetThumbRect(bool bUseNew = false) const;

protected:

	/** �ָ�������*/
	int m_iSepHeight;

	/** ��ť״̬*/
	UINT m_uButtonState;

	/** ��һ������λ��*/
	POINT ptLastMouse;

	/** �ؼ���λ��*/
	CUIRect m_rcNewPos;

	/** �϶��ָ����Ƿ������ı��С*/
	bool m_bImmMode;
};
#endif // __UIVERTICALLAYOUT_H__
