modded class PlayerBase {
    
    bool enterIDCardMenu;
    bool enterSNNoteMenu;

    SN_IDCard m_Card = null;

    void SetCard(SN_IDCard card) {
        m_Card = card;
    }

    SN_IDCard GetCard() {
        return m_Card;
    }

    void RemoveCard() {
        m_Card = null;
    }
}